#!/bin/sh

cd bin
dd if=bmfs_mbr.sys of=disk.image bs=512 conv=notrunc
cat pure64.sys kernel.sys > software.sys
dd if=software.sys of=disk.image bs=512 seek=16 conv=notrunc
