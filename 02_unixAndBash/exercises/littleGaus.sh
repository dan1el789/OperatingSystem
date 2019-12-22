#! /bin/bash
# http://openbook.rheinwerk-verlag.de/shell_programmierung/shell_006_009.htm#RxxKap00600904004E2B1F04E18E

sum=0

for ((i=0; i<=$1; i++))
do
	let sum=$sum+i
done

echo $sum
