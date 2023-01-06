#!/usr/bin/env bash
#create a dynamic library
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o
