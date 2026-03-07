#!/bin/bash

num=76

if [ $num -gt 50 ]; then
	echo "more than half"
	if [ $num -le 100 ]; then
		echo "under a century"
	fi
elif [ $num -ge 25 ]; then
	echo "25 aur 50 ke beech mei"
else
	echo "less than half"
fi
