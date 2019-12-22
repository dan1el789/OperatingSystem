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
If you disable interrupts, the user can type on the keyboard as often as he/she wants and nothing will happen. To come to the main disadvantage if the program never ends, you have to power off your pc to get the control back.  

*page 122 MOS 4th Edition*
## Explain the disadvantage of strict alternation.
There will be some busy waiting which wastes CPU time.

*page 123-124 MOS 4th Edition* 

## Explain the TSL Instruction.
Now  let  us  look  at  a  proposal  that  requires  a  little  help  from  the  hardware. Some computers, especially those designed with multiple processors in mind, have an instruction like 

TSL RX,LOCK

(Test  and  Set  Lock)  that  works  as  follows.   It  reads  the  contents  of  the  memory word *lock* into register RX and then stores a nonzero value at the memory addresslock.  The  operations  of  reading  the  word  and  storing  into  it  are  guaranteed  to  be indivisible — no other processor can access the memory word until the instruction is finished. The CPU executing the TSL instruction locks the memory bus to prohibitother CPUs from accessing memory until it is done. It is important to note that locking the memory bus is very different from disabling  interrupts. Disabling interrupts then performing a read on a memory  word followed by a write does not prevent a second processor on the bus from accessing the word between the read and the write. In fact, disabling interrupts on processor 1 has no effect at all on processor 2. The only way to keep processor 2 out of the memory until processor 1 is finished is to lock the bus, which  requires  a  special hardware facility (basically, a bus line asserting that the bus is locked and not available to processors other than the one that locked it). To  use  the TSL instruction,  we  will  use a shared variable, *lock* , to coordinate access to shared memory. When *lock* is 0, any process may set it to 1 using the TSL instruction and then read or write the shared memory. When it is done, the process sets *lock* back to 0 using an ordinary move instruction.

[also see this](http://www.cs.nott.ac.uk/~pszgxk/courses/g53ops/Processes/proc08-tsl.html)

*page 126 MOS 4th Edition*

## Explain Sleep & Wakeup.
Now let us look at some interprocess communication primitives that block instead of wasting CPU time when they are not allowed to enter their critical regions. One  of  the  simplest  is  the  pair **sleep** and **wakeup**. Sleep is  a  system  call  that causes the caller to block, that is, be suspended until another process wakes it up. The wakeup call  has  one  parameter,  the  process  to  be  awakened.  Alternatively, both sleep and wakeup each have one parameter, a memory address used to match up sleeps with wakeups.

*page 127-130 MOS 4th Edition* **important to read** *sleep and wakeup*

