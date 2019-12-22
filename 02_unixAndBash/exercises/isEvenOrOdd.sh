#! /bin/bash

if (test $(expr $1 % 2) -eq "0")
then 
	echo "even"
else
	echo "odd"
fi
