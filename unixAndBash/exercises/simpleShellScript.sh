#!/bin/bash

#Write a Bashscript to work with /etc/passwd 
#Copy this file into current dir
#filename: (Week Of Year) and passwd
#in the file should be just the name of the users
#sort the content ascending
cp /etc/passwd passwd
cat passwd | cut --delimiter=: --fields=1 | sort > $(date +%U)passwd
