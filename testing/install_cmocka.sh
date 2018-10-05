#!/usr/bin/env bash

wget https://cmocka.org/files/1.1/cmocka-1.1.3.tar.xz
tar vxf cmocka-1.1.3.tar.xz
cd cmocka-1.1.3/
mkdir build
cd build/
cmake -DCMAKE_INSTALL_PREFIX=~ -DCMAKE_BUILD_TYPE=Release ..
make
make install

cd ../..

export PKG_CONFIG_PATH=/home/travis/lib/pkgconfig
export LD_LIBRARY_PATH=LD_LIBRARY_PATH:/home/travis/lib/
