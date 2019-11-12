#!/bin/bash

# pattern matching
name=$1
echo "${name##*/}"

# regex have a look at this http://openbook.rheinwerk-verlag.de/shell_programmierung/shell_013_000.htm#Xxx999276
echo $1 | grep -o '[^/]\+$'

