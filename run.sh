#!/bin/sh

cd bin
qemu-system-x86_64 -vga std -smp 8 -m 256 -drive id=disk,file=disk.image,if=none -device ahci,id=ahci -device ide-drive,drive=disk,bus=ahci.0 -name "BareMetal"
