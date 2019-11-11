#/bin/bash

echo Hello World
echo $PS1
export PS1="\u>"
#bash custom prompt https://www.cyberciti.biz/tips/howto-linux-unix-bash-shell-setup-prompt.html

#How can you list subdirectories with ls?
ls -R 

#How can you determine the available space on the drive in MegaByte
df --block-size=1024 --total 

#determine the number of users currently logged in
who -u

