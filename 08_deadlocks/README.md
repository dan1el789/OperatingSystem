# Deadlocks

## Define Deadlock.
For many applications, a process needs exclusive access to not one resource, but several. Suppose, for example, two processes each want to record a scanned document on a Blu-ray disc. Process *A* requests permission to use the scanner and is granted it. Process *B* is programmed differently and requests the Blu-ray recorder first and is also granted it. Now *A* asks for the Blu-ray recorder, but the request is suspended until *B* releases it.  Unfortunately, instead of releasing the Blu-ray recorder, *B* asks for the scanner.  At this point both processes are blocked and will remain so forever.  This situation is called a **deadlock**.

*page 435 MOS 4th Edition*

### Deadlock can be defined formally as follows:
**A  set  of  processes  is  deadlocked  if  each  process  in  the  set  is  waiting  for  anevent that only another process in the set can cause.**

*page 439 MOS 4th Edition*
## Does a deadlock always occur after a Race-Condition?
It depends on the point of view. When I look from the view of a programmer on that topic, I can say yes - because there was a resource which two processes want to manipulate and overriding each other. If I just want to know the [preconditions for a deadlock](https://github.com/ich-bin-du/OperatingSystem/tree/master/08_deadlocks#deadlock-can-be-defined-formally-as-follows) the answer is no. 

## How many resources and processes are required that a deadlock can occur?
2 reresource and 2 processes. 

## Explain Dining Philosophers Problem.
***read page 167-170 in MOS 4th Edition***

In a nutshell: there are five philosophers and five forks, but each philosopher needs two forks to eat and if every philosopher takes the right fork, no one can eat and all five will starve. 

## Why are there 5 Philosophers?
To have a good simulation to the problem. 

## List four preconditions for deadlocks.
Coffman et al. (1971) showed that four conditions must hold for there to be a (resource) deadlock:
1. Mutual exclusion condition.  Each resource is either currently assigned to exactly one process or is available.
2. Hold-and-wait  condition.  Processes  currently  holding  resources  that were granted earlier can request new resources.
3. No-preemption  condition.   Resources  previously  granted  cannot  beforcibly taken away from a process.  They must be explicitly releasedby the process holding them.
4. Circular wait condition.  There must be a circular list of two or more processes, each of which is waiting  for a resource held by the next member of the chain. 

All four of these conditions must be present for a resource deadlock to occur.  If one of them is absent, no resource deadlock is possible. It is worth noting that each condition relates to a policy that a system can have or not have. Can a given resource be assigned to more than one process at once? Can a process hold a resource and ask for another?  Can resources be preempted? Can  circular  waits  exist? Later on we will see how deadlocks can be attacked by trying to negate some of these conditions.

## Explain Ostrich Algorithm.
The simplest approach is the ostrich algorithm: stick your head in the sand and pretend there is no problem¹. People react to this strategy in different ways.  Mathematicians find it unacceptable and say that deadlocks must be prevented at allcosts. Engineers ask how often the problem is expected, how often the system crashes for other reasons, and how serious a deadlock is. If deadlocks occur on the average once every five years, but system crashes due to hardware failures and operating system bugs  occur once a week, most engineers would not be willing topay a large penalty in performance or convenience to eliminate deadlocks. To make this contrast more specific, consider an operating system that blocks the caller when an open system call on a physical device such as a Blu-ray driver or a printer cannot be carried out because the device is busy. Typically it is up  to the device driver to decide what action to take under such circumstances.  Blocking or returning an error code are two obvious possibilities. If one process successfully opens the Blu-ray drive and another successfully opens the printer and then each process tries to open the other one and blocks trying, we have a dead-lock. Few current systems will detect this.

¹ Actually, this bit of folklore is nonsense. Ostriches can run at 60 km/hour and their kick is powerfulenough to kill any lion with visions of a big chicken dinner, and lions know this.

*page 443 MOS 4th Edition*

## Explain Two-Phase Locking.

Although both avoidance and prevention are not terribly promising in the general case, for specific applications, many excellent special-purpose algorithms are known. As an example, in many database systems, an operation that occurs frequently is requesting locks on several records and then updating all the locked records. When multiple processes are running at the same time, there is a real danger of deadlock.

 The  approach  often  used  is  called **two-phase  locking**.  In the  first  phase,  theprocess tries to lock all the records it needs, one at a time.  If it succeeds, it begins the second phase, performing its updates and releasing the locks.  No real work is done in the first phase. 

If during the first phase, some record is needed that is already locked, the process  just  releases  all  its  locks  and  starts  the  first  phase  all  over.   In a certain  sense, this  approach  is  similar  to  requesting  all  the  resources  needed  in  advance,  or  at least before anything irreversible is done.  In some versions of two-phase locking, there  is  no  release  and  restart  if  a  locked  record  is  encountered  during  the  first phase.  In these versions, deadlock can occur.

However, this  strategy  is  not  applicable  in  general.  In  real-time  systems  and process control systems, for example, it is not acceptable to just terminate a proc-ess  partway  through  because  a  resource  is  not  available  and  start  all  over  again. Neither is it acceptable to start over if the process has read or written messages to the network, updated files, or anything else that cannot be safely repeated.  The algorithm  works  only  in  those  situations  where  the  programmer  has  very  carefully arranged  things  so  that  the  program  can  be  stopped  at  any  point  during  the  firstphase and restarted.  Many applications cannot be structured this way.

*page 459 MOS 4th Edition*

# Process Progress Diagrams

## What is a process progress diagram and what is it used for?
[have a look at this](https://elearning.fhws.de/pluginfile.php/1086970/mod_resource/content/0/11_Deadlocks.pdf#Outline0.2)
A process progress diagram can be used to detect deadlocks. 

## Create the following process progress diagram: Process 1: Acquire R2, Acquire R1, Release R1, Release R2. Process 2: Acquire R1, Acquire R2, Release R1, Release R2. Can a deadlock occur?

# Petri-Nets

## Explain Petri Nets.

## Explain Precondition and Postconditions of Places and Transitions.

## Explain the rules for triggering a transition.

## Explain reachability graphs.

## How can you detect a deadlock within a petri net?

## Create a petri net for two cars fighting for a parking lot. How can you extend the petri-netto support more than one parking lot?
