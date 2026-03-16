#!/bin/bash

# Read all files in a folder

folder=$1

for file in $folder/*; do
    echo ""
    echo "----- FILE: $file -----"
    echo ""
    cat "$file"

    echo ""
    echo "RUNNING FILE..."
    bash $file
    echo "======================="
done

