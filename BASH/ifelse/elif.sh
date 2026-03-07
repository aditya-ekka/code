#!/bin/bash

num=28

if [ $num -gt 50 ]; then
	echo "more than half"
elif [ $num -ge 25 ]; then
	echo "25 aur 50 ke beech mei"
else
	echo "less than half"
fi
