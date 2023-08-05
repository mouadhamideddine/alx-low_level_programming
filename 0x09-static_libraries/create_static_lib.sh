#!/bin/bash

directory
c_files=$(ls *.c)


for file in $c_files; do
    gcc -c $file
done


ar rcs liball.a *.o
