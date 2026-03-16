#!/bin/bash

#fruits=("apple")
#fruits+="orange"
#no commas

#for fruit in "${fruits[@]}" ; do
#	echo $fruit
#done

# found err at line 3

arr=("one" "two" "three")

echo ${arr[0]}
echo ${arr[@]}
echo ${#arr[@]}
