#! /bin/bash
#TODO
#Print the number of files in the home directory 
#Print the number of processes of the user
#Just use ls, tail, wc and ps


ps -u $LOGNAME | wc -l
