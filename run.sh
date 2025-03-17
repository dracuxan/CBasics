#!/bin/bash

FILE_NAME=${1}
PROGRAM_ARGS=${2}
flags='-Wall -Wextra'

# Ensure 'bin' directory exists
mkdir -p "bin"

# Check if a filename is provided
if [[ $# -lt 1 ]]; then
    echo "Usage: $0 <output file name> [program arguments if any]"
    exit 1
fi

# Compile the program
echo "Compiling ${FILE_NAME}.c..."
sleep 1
gcc ${flags} ${FILE_NAME}.c -o bin/${FILE_NAME}

# Check if compilation was successful
if [[ $? -ne 0 ]]; then
    echo "Compilation failed."
    exit 1
fi

# Run the program with arguments if provided
if [[ $# -eq 2 ]]; then
    ./bin/${FILE_NAME} ${PROGRAM_ARGS}
    exit 0
fi

./bin/${FILE_NAME}
exit 0
