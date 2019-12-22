# Synchronization

## Explain Race Condition. When can they occur?
A race condition is a behavior which occurs in software applications or electronic systems, such as logic systems, where the output is dependent on the timing or sequence of other uncontrollable events. Race conditions also occur in software which supports multithreading, use a distributed environment or are interdependent on shared resources. Race conditions often lead to bugs, as these events happen in a manner that the system or programmer never intended for. It can often result in a device crash, error notification or shutdown of the application. 

*page 119 - MOS 4th Edition.* 

## Explain Critical Section.
That part of the program where the shared memory is accessed is called the **critical region** or **critical section**. 

*page 121 - MOS 4th Edition* 
## Explain Lost-Update Problem.
In computer science, in the field of databases, write–write conflict, also known as overwriting uncommitted data is a computational anomaly associated with interleaved execution of transactions. 

*page 121 - MOS 4th Edition*

## How can you protect a critical section?
Although this requirement avoids race conditions, it is not sufficient for having parallel  processes  cooperate  correctly  and  efficiently  using  shared  data.  We   need four conditions to hold to have a good solution: 

1.   No two processes may be simultaneously inside their critical regions.
2.   No assumptions may be made about speeds or the number of CPUs.
3.   No process running outside its critical region may block any process.
4.   No process should have to wait forever to enter its critical region

*page 121 - MOS 4th Edition*

## What are the disadvantages of a semaphore?
Problem 1: Programming using Semaphores makes life harder as utmost care must be taken to ensure Up and Down are inserted correspondingly and in the correct order so that mutual exclusion and deadlocks are prevented. In addition, it is difficult to produce a structured layout for a program as the Up and Down are scattered all over the place. So the modularity is lost. Semaphores are quite impractical when it comes to large scale use.

Problem 2: Semaphores involve a queue in its implementation. For a FIFO queue, there is a high probability for a priority inversion to take place wherein a high priority process which came a bit later might just have to wait when a low priority one is in the critical section. For example, consider a case when a new smoker joins and is desperate to smoke. What if the agent who handles the distribution of the ingredients follows a FIFO queue (wherein the desperate smoker is last according to FIFO) and chooses the ingredients apt for another smoker who would rather wait some more time for a next puff?

*page 130 - MOS 4th Edition* 


## Using one semaphore for multiple critical sections can lead to problems. Describe them.
You get blocked by the semaphore if one critical section is executed which may would have no influence on the job you want to execute.

## Explain busy waiting.
Continuously testing a variable until some value appears is called **busy waiting**. A lock that uses busy waiting is called a **spin lock**. 

*page 124 - MOS 4th Edition*

## Explain the disadvantage of disabling interrupts.

## Explain the disadvantage of strict alternation.

## Explain the TSL Instruction.

## Explain Sleep & Wakeup.
