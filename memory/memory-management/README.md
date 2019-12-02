# Memory-Management

# **What is memory hierarchy and what is its usage?**

What is the second choice?  Over the years, people discovered  the concept of a memory  hierarchy,  in which computers  have  a **few megabytes  of very  fast,  expensive,  volatile  cache  memory,  a  few  gigabytes  of  medium-speed,   medium-priced,  volatile  main  memory,  and  a  few  terabytes  of slow,  cheap,  nonvolatile  disk storage**,  not to mention removable storage,  such as DVDs and USB  sticks.  It  is the job of the operating system  to abstract this hierarchy  into a useful  model and then  manage  the abstraction. *page 173*

# **What does the term memory abstraction mean?**

Two  problems have to be solved  to  allow  multiple applications  to be in  memory at the same  time  without their  interfering with each other:  protection  and relocation.   We  looked  at  a  primitive  solution  to  the  former  used  on  the  IBM  360:  label  chunks of memory  with a  protection  key  and compare  the key  of the  executing  process  to that  of every  memory  word fetched.  However,  this  approach  by  itself does  not solve the latter problem, although it can  be  solved  by relocating  programs as they are loaded, but this is a slow and complicated  solution. 

 A better solution is to invent a new abstraction  for memory:  the address  space,  just as the process concept creates a kind of abstract  CPU  to run programs, the address  space  creates  a  kind  of  abstract  memory  for  programs  to  live  in.   An  address space is  the set of addresses that a process can use to address memory.  Each  process  has its  own  address  space,  independent  of those  belonging  to other  processes  (except  in  some  special  circumstances  where  processes  want  to  share  their  address spaces). 

# **Are there any systems without memory abstraction and what are these?**

Finally, as we pointed out in Chap.  1, history tends to repeat itself in the computer  world.  While  direct  addressing  of physical memory  is  but a distant memory (sorry)  on  mainframes,  minicomputers,  desktop  computers,  and  notebooks,  the  lack  of a  memory  abstraction  is  still  common  in  embedded  and  smart  card  sytems. **Devices such as radios, washing machines, and microwave ovens are all  full  of software  (in  ROM)  these days,  and  in most  cases  the  software  addresses  absolute  memory.  This  works  because  all  the  programs  are  known  in  advance  and  users are not free to run their own software on their toaster.**
 While  high-end  embedded  systems  (such as cell  phones) have elaborate  operating systems,  simpler ones  do  not.  In  some cases,  there  is an operating  system,  but it is just a library  that is linked with  the application  program  and provides sys-tem  calls  for performing  I/O  and  other  common  tasks.  The  popular  e-cos  operating system is a common example of an operating system as library. *page 177*

# **What are the problems when using systems without memory abstraction?**

Under these  conditions,  it  was  not possible  to  have  two  running  programs  in  memory at  the  same time.  If the first  program  wrote  a  new  value  to,  say,  location  2000,  this  would  erase  whatever  value  the  second  program  was  storing  there.  Nothing  would  work and  both programs would crash  almost immediately *page 174*

# **Explain static relocation and why it is not a general solution for executing multipleprograms on systems without memory abstraction?**

The core problem here is that the two programs both reference absolute physical  memory. That is  not what  we want at all.  We  want each program  to reference a private  set  of addresses  local  to  it.   We  will show  how  this  is  achieved  shortly.  What the  IBM  360 did as  a  stop-gap  solution  was  modify  the second program  on  the fly  as  it  loaded  it  into  memory  using  a  technique  known  as static  relocation.  It  worked  like  this.  When  a program  was  loaded  at  address  16,384,  the  constant  16,384  was  added  to  every  program  address  during  the  load process.  While  this  mechanism  works  if done  right,  it  is not  a  very  general  solution  and  slows  down  loading.   Furthermore,  it requires  extra  information  in  all  executable  programs  to  indicate  which  words  contain  (relocatable)  addresses  and  which  do not.  After  all  the "28" in Fig. 3-2(b) has to be relocated but an instruction like

MOVREGISTER1,28

which  moves  the  number  28  to  REGISTER1  must  not  be  relocated.  The  loader  needs some way to tell what is an address and what is a constant. *page 177* ***important diagram on this page!***

# **Which component is responsible to convert between logical and physical memory addresses?**

# **Explain the idea behind the Basis and Limit register.**
