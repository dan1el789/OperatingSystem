#! /bin/bash

# http://openbook.rheinwerk-verlag.de/shell_programmierung/shell_006_000.htm#RxxKap00600004004E0C1F017182

let counter=0
for user in $*
do

	if grep "^$user:" /etc/passwd > /dev/null
	then
		echo "$user exists"
		let counter=counter+1
	fi
done

echo "$counter users exist"
exit $counter
