#!/bin/bash

temp_dir=$(mktemp -d)

cp *.c $temp_dir

cd $temp_dir

gcc -fPIC -shared -o liball.so *.c

mv mylibrary.so ..

cd ..
rm -r $temp_dir
