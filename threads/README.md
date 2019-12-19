# Threads

## What is the difference between processes and threads?
A process is a complete programm and a thread is a pipeline for (CPU) instructions. Every process can have one or more threads and one thread belongs to one process.
 
## Explain Data Decomposition.
If your data is not decomposited you can't work in parallel. Because if you modify a AVL-tree it get's reorderd and if one thread inserts something and the other was looking for something in the tree, the tree can get reorderd while searching in it and you maybe don't find the correct result. 

## When does parallel programming pay off?

## What about measuring?

## How to start a thread?
