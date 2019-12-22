create directory and access it -> mkdir test && cd test

copy file from /etc/passwd into dir -> sudo cp /etc/passwd passwd

count number of lines in file -> sudo wc passwd 

print and change the permissions of file -> ll passwd -> chmod -r passwd 

go to parent directory and remove test-dir -> cd .. && rm -r test


Explain **who | wc -l** 

counts the numbers of line from the who-command -> counts the number of users which are logged in 


Explain **echo $(who | wc -l) User** 

adds a text to the command before


Explain **echo "Hello World" > hello.txt** 

the > is used to print the output to a file


Append some text to hello.txt

echo "test" >> hello.txt
