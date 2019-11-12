#! /bin/bash

if grep "^$1:" /etc/passwd > /dev/null
then
	echo "$1 exists"
	exit 0
fi

echo "$1 doesn't exist"
exit 1
