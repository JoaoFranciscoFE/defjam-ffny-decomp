# Build da decompilação de Def Jam: Fight for NY (SLUS-21004)
# Uso: make setup  (gera o .rom e divide o ELF com o splat)
#      make        (monta, linka e confere se o binário bate byte a byte)

BASENAME  := SLUS_210.04
BUILD_DIR := build
CROSS     := mips-linux-gnu-

AS      := $(CROSS)as
LD      := $(CROSS)ld
OBJCOPY := $(CROSS)objcopy

ASFLAGS := -EL -march=r5900 -mabi=eabi -G0 -no-pad-sections -I include
LDFLAGS := -EL -T $(BUILD_DIR)/$(BASENAME).ld -T undefined_syms_auto.txt -T undefined_funcs_auto.txt -T linker_script_extra.ld -Map $(BUILD_DIR)/$(BASENAME).map --no-check-sections

S_FILES := $(shell find asm -name '*.s' 2>/dev/null)
O_FILES := $(S_FILES:%.s=$(BUILD_DIR)/%.o)

ELF := $(BUILD_DIR)/$(BASENAME).elf
ROM := $(BUILD_DIR)/$(BASENAME).rom

all: check

setup:
	$(OBJCOPY) -O binary --gap-fill=0x00 $(BASENAME) $(BASENAME).rom
	python3 -m splat split $(BASENAME).yaml

$(BUILD_DIR)/%.o: %.s
	@mkdir -p $(dir $@)
	$(AS) $(ASFLAGS) -o $@ $<

# O ELF original tem .sbss e .bss em endereços fixos (0x3FD500 e 0x3FD800);
# o script gerado pelo splat não sabe disso, então ajustamos aqui.
$(BUILD_DIR)/$(BASENAME).ld: $(BASENAME).ld
	@mkdir -p $(BUILD_DIR)
	sed -e 's/\.cod_bss (NOLOAD) :/.cod_bss 0x003FD500 (NOLOAD) :/' \
	    -e 's/cod_BSS_START = \.;/. = 0x300; cod_BSS_START = .;/' $< > $@

$(ELF): $(O_FILES) $(BUILD_DIR)/$(BASENAME).ld
	$(LD) $(LDFLAGS) -o $@

$(ROM): $(ELF)
	$(OBJCOPY) -O binary --gap-fill=0x00 $< $@

check: $(ROM)
	@sha1sum $(BASENAME).rom $(ROM)
	@cmp -s $(BASENAME).rom $(ROM) && echo "OK: binário idêntico ao original" || (echo "DIFERENTE do original"; exit 1)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all setup check clean
