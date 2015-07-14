#!/bin/sh

if [ ! -d "$loader" ]; then
  mkdir loader
fi
cd loader
git clone https://github.com/ReturnInfinity/Pure64.git
cd ..

if [ ! -d "$bin" ]; then
  mkdir bin
fi
platform=`uname`
case "${platform}" in
  Darwin)
    dd if=/dev/zero of=bin/disk.image bs=1m count=128
    ;;
  *)
    dd if=/dev/zero of=bin/disk.image bs=1M count=128
    ;;
esac

cd loader/Pure64
./build.sh
cp *.sys ../../bin
cd ../..