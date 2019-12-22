# Threads

## What is the difference between processes and threads?
A process is a complete programm and a thread is a pipeline for (CPU) instructions. Every process can have one or more threads and one thread belongs to one process.
 
## Explain Data Decomposition.
If your data is not decomposited you can't work in parallel. Because if you modify a AVL-tree it get's reorderd and if one thread inserts something and the other was looking for something in the tree, the tree can get reorderd while searching in it and you maybe don't find the correct result. 

## When does parallel programming pay off?
* PC has more than one core.
* The functionality is used often.
* Processing of huge amount of data
* Complex computations
* Few dependencies between threads
* Short waiting time for extern resources

## What about measuring?
You can measure time in different ways. The command time measures the complete execution time. Execution time measurement has to be done within the application. Measurement has to be repeated to calculate the average time of many measurements to eliminate side effects from starting the program or the garbagecollector.

## How to start a thread?
[have a look at this piece of code](https://github.com/ich-bin-du/OperatingSystem/blob/master/threads/Sample.java)
