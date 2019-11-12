# determine the number of ls commands executed up to now
history | grep ls | wc -l

# Find all words starting with *Ger* in the english dictionary. Save the result in a text file with day of week. 
cat /usr/share/dict/american-english | grep "^Ger" > $(date +%A).txt

# Take a look on **man find** what is the purpose of the option -exec and how to use. 
-exec command {} +
              This  variant  of the -exec action runs the specified command on
              the selected files, but the command line is built  by  appending
              each  selected file name at the end; the total number of invoca‐
              tions of the command will  be  much  less  than  the  number  of
              matched  files.   The command line is built in much the same way
              that xargs builds its command lines.  Only one instance of  `{}'
              is  allowed  within the command, and (when find is being invoked
              from a shell) it should be quoted (for example, '{}') to protect
              it  from  interpretation  by shells.  The command is executed in
              the starting directory.  If any invocation with the `+' form re‐
              turns  a non-zero value as exit status, then find returns a non-
              zero exit status.  If find encounters an error, this  can  some‐
              times  cause an immediate exit, so some pending commands may not
              be run at all.  This variant of -exec always returns true.

**You can execute an command and if the returnvalue is 0 find returns a 0**

# Take a look on **man top** what is the meaning of load average. 
2a. UPTIME and LOAD Averages
       This portion consists of a single line containing:
           program or window name, depending on display mode
           current time and length of time since last boot
           total number of users
           system load avg over the last 1, 5 and 15 minutes

**take shows the load of the system** the percentilevalues of CPU and MEM are calculated over the last one, five or fifteen minutes

# Get your IP, which interface represents ethernet cable connection and which represents wifi connection?
ifconfig

eth -> ethernet cable 
wlan -> wifi connection

#Determine the clock rate of your cpu in /proc
cat /proc/cpuinfo | grep MHz

#Determine the version of your Linux kernel
cat /proc/sys/kernel
