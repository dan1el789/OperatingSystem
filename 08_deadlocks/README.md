# 1 Deadlocks

## 1.1 Define Deadlock.
For many applications, a process needs exclusive access to not one resource, but several. Suppose, for example, two processes each want to record a scanned document on a Blu-ray disc. Process *A* requests permission to use the scanner and is granted it. Process *B* is programmed differently and requests the Blu-ray recorder first and is also granted it. Now *A* asks for the Blu-ray recorder, but the request is suspended until *B* releases it.  Unfortunately, instead of releasing the Blu-ray recorder, *B* asks for the scanner.  At this point both processes are blocked and will remain so forever.  This situation is called a **deadlock**.

*page 435 MOS 4th Edition*

### **Deadlock can be defined formally as follows:** 
A  set  of  processes  is  deadlocked  if  each  process  in  the  set  is  waiting  for  anevent that only another process in the set can cause.

*page 439 MOS 4th Edition*
## 1.2 Does a deadlock always occur after a Race-Condition?

## 1.3 How many resources and processes are required that a deadlock can occur?

## 1.4 Explain Dining Philosophers Problem.

## 1.5 Why are there 5 Philosophers?

## 1.6 List four preconditions for deadlocks.

## 1.7 Explain Ostrich Algorithm.

## 1.8 Explain Two-Phase Locking.
