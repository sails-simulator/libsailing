#!/usr/bin/env bash

wget https://cmocka.org/files/1.0/cmocka-1.0.1.tar.xz
tar vxf cmocka-1.0.1.tar.xz
cd cmocka-1.0.1/
mkdir build
cd build/
cmake -DCMAKE_INSTALL_PREFIX=/usr -DCMAKE_BUILD_TYPE=Release ..
make
make install

cd ../..
