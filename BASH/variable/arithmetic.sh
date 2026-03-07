#!/bin/bash

num1=5
num2=6

echo "$((num1+num2))"

sum=$((num1 + num2))
echo "$sum\n"

mul=$((num1 * num2))
echo "$mul"

div=$((num1 / num2))
echo "$div"
#returns an integer when both num1 and num2 are integer

sub=$((num1 - num2))
echo "$sub"

#num3=10.0 #10.0 is an err
#num4=3.0
#echo "$((num3 / num4))"

num5=4
echo "$((num1 + (num2 * num5)))"
