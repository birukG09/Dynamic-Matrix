#!/bin/bash

# Build and run script for the matrix project
BUILD_DIR="build_shell"
mkdir -p $BUILD_DIR

echo "Compiling matrix_advanced.c..."
gcc -O3 c/matrix_advanced.c -o $BUILD_DIR/matrix_advanced

if [ $? -eq 0 ]; then
    echo "Running matrix_advanced..."
    ./$BUILD_DIR/matrix_advanced
else
    echo "Compilation failed."
fi
