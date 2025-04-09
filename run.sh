#!/bin/bash

FILE_NAME=${1}
flags='-Wall -Wextra -lm'

# Ensure 'bin' directory exists
mkdir -p "bin"

# Check if a filename is provided
if [[ $# -lt 1 ]]; then
    echo "Usage: $0 <output file name> [program arguments if any]"
    exit 1
fi

# Compile the program
echo "Compiling ${FILE_NAME}.c..."
gcc ${flags} ${FILE_NAME}.c -o bin/${FILE_NAME}

# Check if compilation was successful
if [[ $? -ne 0 ]]; then
    echo "Compilation failed."
    exit 1
fi

./bin/${FILE_NAME}
exit 0
