#/bin/bash

#commitscript
find -name commit.sh > out
while read LINE; do 
	cp ./resources/commit.sh $LINE 
done < out
rm out

#runscript
find -name run.sh > out
while read LINE; do 
        cp ./resources/run.sh $LINE 
done < out
rm out
