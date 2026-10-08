# Build da decompilação de Def Jam: Fight for NY (SLUS-21004)
# Uso: make setup  (gera o .rom, divide o ELF com o splat e ajusta o asm para o assembler do SN)
#      make        (compila, linka e confere se o binário bate byte a byte)
#
# Compilador: ee-gcc 2.95.3 (SN ProDG build 136), -O2 -G0, rodando via Wine.
# Baixe em https://github.com/decompme/compilers (arquivo ps2_compilers.tar.xz) e aponte SN_DIR para
# a pasta ee-gcc2.95.3-136.

BASENAME  := SLUS_210.04
BUILD_DIR := build
CROSS     := mips-linux-gnu-
SN_DIR    ?= tools/compilers/ee-gcc2.95.3-136

AS      := $(CROSS)as
LD      := $(CROSS)ld
OBJCOPY := $(CROSS)objcopy
WINE    ?= wine
CC      := WINEDEBUG=-all $(WINE) $(SN_DIR)/bin/ee-gcc.exe

CFLAGS  := -c -O2 -G0 -ffunction-sections -I include -I src
ASFLAGS := -EL -march=r5900 -mabi=eabi -G0 -no-pad-sections -I include
LDFLAGS := -EL -T $(BUILD_DIR)/$(BASENAME).ld -T undefined_syms_auto.txt -T undefined_funcs_auto.txt -T linker_script_extra.ld -Map $(BUILD_DIR)/$(BASENAME).map --no-check-sections

C_FILES := $(shell find src -name '*.c' 2>/dev/null)
S_FILES := $(shell find asm/data -name '*.s' 2>/dev/null)
O_FILES := $(C_FILES:%.c=$(BUILD_DIR)/%.o) $(S_FILES:%.s=$(BUILD_DIR)/%.o) $(BUILD_DIR)/nonmatchings.o

ELF := $(BUILD_DIR)/$(BASENAME).elf
ROM := $(BUILD_DIR)/$(BASENAME).rom

all: check

setup:
	$(OBJCOPY) -O binary --gap-fill=0x00 $(BASENAME) $(BASENAME).rom
	python3 -m splat split $(BASENAME).yaml
	./tools/download_compiler.sh

# C (com INCLUDE_ASM das funções ainda não decompiladas) -> compilador original do SN
$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $< -o $@
	python3 tools/fix_sn_obj.py $@

# Dados (.data/.rodata/.bss...) continuam em assembly, montados com o binutils moderno
$(BUILD_DIR)/%.o: %.s
	@mkdir -p $(dir $@)
	$(AS) $(ASFLAGS) -o $@ $<

# Funções ainda em assembly + linker script com todas as funções na ordem original
$(BUILD_DIR)/$(BASENAME).ld $(BUILD_DIR)/nonmatchings.s: $(BASENAME).ld $(C_FILES) tools/gen_link.py
	@mkdir -p $(BUILD_DIR)
	python3 tools/gen_link.py $(BASENAME).ld $(BUILD_DIR)/$(BASENAME).ld $(BUILD_DIR)/nonmatchings.s

$(BUILD_DIR)/nonmatchings.o: $(BUILD_DIR)/nonmatchings.s
	$(AS) $(ASFLAGS) -o $@ $<

$(ELF): $(O_FILES) $(BUILD_DIR)/$(BASENAME).ld
	$(LD) $(LDFLAGS) -o $@ $(BUILD_DIR)/nonmatchings.o

$(ROM): $(ELF)
	$(OBJCOPY) -O binary --gap-fill=0x00 $< $@

check: $(ROM)
	@sha1sum $(BASENAME).rom $(ROM)
	@cmp -s $(BASENAME).rom $(ROM) && echo "OK: binário idêntico ao original" || (echo "DIFERENTE do original"; exit 1)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all setup check clean
