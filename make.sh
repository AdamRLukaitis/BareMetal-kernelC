#!/bin/sh
gcc -c -m64 -nostdlib -nostartfiles -nodefaultlibs -fomit-frame-pointer -mno-red-zone -o kernel.o src/kernel.c
ld -T app.ld -o kernel.sys kernel.o
