# Memory-Management

**What is memory hierarchy and what is its usage?**

What is the second choice?  Over the years, people discovered  the concept of a memory  hierarchy,  in which computers  have  a **few megabytes  of very  fast,  expensive,  volatile  cache  memory,  a  few  gigabytes  of  medium-speed,   medium-priced,  volatile  main  memory,  and  a  few  terabytes  of slow,  cheap,  nonvolatile  disk storage**,  not to mention removable storage,  such as DVDs and USB  sticks.  It  is the job of the operating system  to abstract this hierarchy  into a useful  model and then  manage  the abstraction. *page 173*

**What does the term memory abstraction mean?**



**Are there any systems without memory abstraction and what are these?**

Finally, as we pointed out in Chap.  1, history tends to repeat itself in the computer  world.  While  direct  addressing  of physical memory  is  but a distant memory (sorry)  on  mainframes,  minicomputers,  desktop  computers,  and  notebooks,  the  lack  of a  memory  abstraction  is  still  common  in  embedded  and  smart  card  sy-tems. **Devices such as radios, washing machines, and microwave ovens are all  full  of software  (in  ROM)  these days,  and  in most  cases  the  software  addresses  abso-lute  memory.  This  works  because  all  the  programs  are  known  in  advance  and  users are not free to run their own software on their toaster.**
 While  high-end  embedded  systems  (such as cell  phones) have elaborate  operating systems,  simpler ones  do  not.  In  some cases,  there  is an operating  system,  but it is just a library  that is linked with  the application  program  and provides sys-tem  calls  for performing  I/O  and  other  common  tasks.  The  popular  e-cos  operat-ing system is a common example of an operating system as library. *page 177*

**What are the problems when using systems without memory abstraction?**

Under these  conditions,  it  was  not possible  to  have  two  running  programs  in  memory at  the  same time.  If the first  program  wrote  a  new  value  to,  say,  location  2000,  this  would  erase  whatever  value  the  second  program  was  storing  there.  NoUiing  would  work and  both programs would crash  almost immediately *page 174*

**Explain static relocation and why it is not a general solution for executing multipleprograms on systems without memory abstraction?**

**Which component is responsible to convert between logical and physical memory addresses?**

**Explain the idea behind the Basis and Limit register.**
