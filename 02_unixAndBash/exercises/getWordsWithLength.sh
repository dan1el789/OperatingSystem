#!/bin/bash

cat /usr/share/dict/american-english | grep -x ".\{$2\}" | grep $1
