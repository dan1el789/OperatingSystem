# Buddy Systems
[Buddy system in script](https://elearning.fhws.de/pluginfile.php/1086958/mod_resource/content/1/07_Memory.pdf#Outline0.1.3.35)

## Explain in general the functioning of the Buddy Algorithm when requesting S bytes.
Calculate depth = roundup( log2(N / S) )

You have a storage of N bytes if you request S bytes you look into the calculated depth for memory partitions. If there is no partition of this size created you look one step above for a free unused partition, if you find it, you divide into two blocks and one of them is used for your memory request. Else this step will be done one step above again. 

## How does the Buddy Algorithm detect that there is no memory for him to get?
You run to the binary tree to allocate bytes like in step one. If you find out everything on the correct depth is allocated, you will find out that there is no possiblity to allocate memory. 


## What kinds of fragmentation are there in a Buddy System and how is memory divided?

## You have heard in the lecture that free memory blocks of size 2^k are managed in a list.  Are there any other methods to manage the memory?
