#!/bin/sh
# Baixa o compilador original (SN ProDG ee-gcc 2.95.3 build 136) do repositório do decomp.me.
set -e
mkdir -p tools/compilers
cd tools/compilers
if [ ! -d ee-gcc2.95.3-136 ]; then
    curl -sSfL -o ps2_compilers.tar.xz \
        "https://github.com/decompme/compilers/releases/download/compilers/ps2_compilers.tar.xz"
    tar xJf ps2_compilers.tar.xz ee-gcc2.95.3-136
    rm ps2_compilers.tar.xz
fi
echo "Compilador em tools/compilers/ee-gcc2.95.3-136"
