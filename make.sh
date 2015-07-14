#!/bin/sh
gcc -c -m64 -nostdlib -nostartfiles -nodefaultlibs -fomit-frame-pointer -mno-red-zone -o kernel.o src/kernel.c
gcc -c -m64 -nostdlib -nostartfiles -nodefaultlibs -fomit-frame-pointer -mno-red-zone -o 64.o src/init/64.c
gcc -c -m64 -nostdlib -nostartfiles -nodefaultlibs -fomit-frame-pointer -mno-red-zone -o screen.o src/syscalls/screen.c
ld -T app.ld -o kernel.sys kernel.o 64.o screen.o
cp kernel.sys bin/
