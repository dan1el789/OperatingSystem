#! /bin/bash

# http://openbook.rheinwerk-verlag.de/shell_programmierung/shell_006_000.htm#RxxKap00600004004E0C1F017182

if grep "^$1:" /etc/passwd > /dev/null
then
	echo "$1 exists"
	exit 0
fi

echo "$1 doesn't exist"
exit 1
