#!/bin/bash

fruits=("apple" "banana" "grapes" "orange")
#no commas

for fruit in "${fruits[@]}" ; do
	echo $fruit
done

# found err at line 3
