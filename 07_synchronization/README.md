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

## Using one semaphore for multiple critical sections can lead to problems. Describe them.

## Explain busy waiting.

## Explain the disadvantage of disabling interrupts.

## Explain the disadvantage of strict alternation.

## Explain the TSL Instruction.

## Explain Sleep & Wakeup.
