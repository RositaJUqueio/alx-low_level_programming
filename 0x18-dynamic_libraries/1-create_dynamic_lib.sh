#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -c -fPIC *.c

# Create the dynamic library from the object files
gcc -shared -o liball.so *.o

# Clean up the object files
rm *.o
