Answer this Question according to Andrew Tanenbaums book Modern Operating Systems
All answers refere to the third edition. 
# Which operating System can be seen as the first operating System?
*page 7* - The  first  true  digital  computer  was  designed  by  the  English  mathematician  Charles  Babbage  (1792-1871).   Although  Babbage  spent most  of his  life  and  for-tune  trying  to  build his  "analytical  engine,"  he  never got  it  working  properly  be-cause  it  was  purely  mechanical,  and  the  technology  of his  day  could  not  produce  the  required  wheels,  gears,  and  cogs  to  the  high precision  that  he  needed.  Need-less to say, the analytical engine  did not have an operating  system.  As  an  interesting  historical  aside,  Babbage  realized  that  he  would  need  soft-ware  for his analytical  engine,  so he hired  a young  woman  named  Ada Lovelace, who  was  the  daughter  of  the  famed  British  poet  Lord Byron,  as  the  world's  first  programmer.  The  programming  language Ada® is  named  after her.
page 10 - Typical  operating systems were FMS (the Fortran Monitor System)  and IBSYS,  IBM's operating  system for the 7094. 

# Why was there no need for an operating system in the first computergeneratioin
*page 8* -  All programming was done in absolute machine language, or even worse yet, by wiring up electrical cir-cuits  by  connecting  thousands  of  cables  to  plugboards  to  control  the  machine's  basic  functions.

# Explain what a resource in context of an operating system is/represents and provide an example
*page 6* - When  a computer  (or network)  has multiple users,  the  need  for  managing  and  protecting  the  memory,  I/O  devices,  and  other resources  is even  greater,  since  the  users  might  otherwise  interfere  with  one  another.   In  addition,  users  often  need  to  share  not  only  hardware,  but  information  (files,  databases,  etc.)  as  well.   In short, this  view  of  the  operating  system  holds  that  its  primary  task  is  to  keep  track  of  which  programs  are  using  which  resource,  to  grant  resource  requests,  to  account  for usage,  and to  mediate  conflicting  requests  from different  programs and  users.  
# What  is  Multiplexing?  Explain  the  difference  between  Time  and  Space  Multiplexing. Find examples outside of computer science. 

*page 6* - Resource  management  includes  multiplexing  (sharing)  resources  in  two  dif-ferent  ways:  in time  and  in  space.  When a resource  is  time  multiplexed,  different  programs  or users  take  turns  using  it.  First  one  of them  gets  to  use  the  resource,  then  another,  and so  on.  For example,  with only one CPU  and  multiple programs that want to run on  it,  the operating system first allocates  the CPU to one program, then,  after  it has  run  long enough,  another one  gets  to  use  the  CPU,  then  another,  and  then eventually  the first  one  again. Determining how the resource is time  mul-tiplexed—who  goes  next  and  for  how  long—is  the  task  of  the  operating  system.  Another example  of time  multiplexing is  sharing  the  printer.   When  multiple print jobs  are  queued  up  for  printing  on  a  single  printer,  a  decision  has  to  be  made  about which  one is to be printed next.

*page 7* - The  other kind  of multiplexing  is space  multiplexing.  Instead  of the customers taking  turns,  each  one  gets  part  of the  resource.   For  example,  main  memory  is  normally divided up among several running programs,  so each one  can be resident at  the  same  time  (for  example,  in  order  to  take  turns  using  the CPU).   Assuming   there  is  enough  memory  to  hold  multiple  programs,  it  is  more  efficient  to  hold  several  programs  in.memory  at  once  rather  than  give  one  of them  all  of it,  espe-cially  if it  only  needs  a  small  fraction  of the total.   Of course,  this  raises  issues  of  fairness,  protection,  and  so on,  and it is  up  to  the  operating  system  to solve  them.  Another  resource  that  is  space  multiplexed  is  the (hard) disk.   In many  systems  a  single  disk  can  hold  files  from  many  users  at the same  time.  Allocating  disk space and  keeping  track  of who  is  using  which  disk  blocks  is  a  typical  operating  system  resource  management  task. 

**Example**: Two Groups of people want to use one a hall. The first one want to use the the speaker system, the second one want to use the chairs and table. So the only conflict is about the space, but if both don't need the space you can divide the hall into two pieces and both can use the hall with their intent. 

# What is the main task of current operating systems?
*page 3* - It  is  hard  to pin  down  what  an  operating  system  is  other  than  saying  it  is  the  software  that  runs  in  kernel  mode—and  even  that  is  not  always  true.  Part  of  the  problem  is  that **operating  systems  perform  two  basically  unrelated  functions:  providing  application  programmers  (and  application  programs,  naturally)  a  clean  abstract  set  of resources  instead  of the  messy  hardware  ones  and  managing  these hardware  resources.**  Depending  on  who  is  doing  the  talking,  you  might  hear  mostly about one function or the other.  Let us now look at both. 

# Explain the term Multi-Programming and find the term we are using today instead.
*page 10 to 11* With  the introduction of the  IBM  System/360, whjtased ICs  (Integrated  Cir-cuits),  IBM  combined  these  two  machine  types  in  flHpe   series  of compatible machines.  The  lineal  descendant  of  the  360,  the  zSeif^  is  still  widely used  for  high-end server applications   with   massive   data   bases. One Of   the   many innovations  on  the  360 was  multiprogramming,  the  ability  to have  several  programs in memory at once, each in its own  memory partition. (as shown  in Fig.  1-5.) **While  one job  was  waiting  for  I/O  to  complete,  another job  could  be  using  the  CPU.  Special hardware kept one program from interfering  with  another.** 

Although  third-generation  operating  systems  were  well  suited  for  big  scien-tific  calculations  and  massive  commercial  data  processing  runs,  they  were  still  basically  batch  systems  with  turnaround  times  of an  hour.   Programming  is  diffi-cult if a misplaced  comma  wastes  an  hour.   This  desire  of many  programmers  for  quick  response  time  paved  the  way  for  timesharing,  a  variant  of multiprogramming,  in  which  each  user has  an  online  terminal.   In  a  **timesharing**  system,  if 20 users  are  logged  in  and  17  of them  are  thinking  or talking  or  drinking  coffee,  the  CPU  can  be  allocated  in  turn  to  the  three jobs  that  want  service.  Since  people  debugging programs  usually  issue  short  commands  (e.g.,  compile  a five-page pro-ceduref)  rather  than  long  ones  (e.g.,  sort  a million-record  file),  the  computer  can  provide fast,  interactive  service to a number of users and perhaps also work on big batch jobs  in  the  background  when  the  CPU  is  otherwise  idle.  The  first  serious  timesharing  system,  CTSS  (Compatible  Time Sharing System),  was  developed  at M.I.T.  on a specially  modified 7094 (Corbatd et al.,  1962).  However,  timeshar-ing did  not really  become popular until  the  necessary  protection  hardware became widespread during the third generation.

# Is CPU usage better with Multi-Programming? What does CPU usage represent?
The CPU usage is **better** with Multi-Programming, according to page 11 ***While  one job  was  waiting  for  I/O  to  complete,  another job  could  be  using  the  CPU.  Special hardware kept one program from interfering  with  another.***

# Explain Time-Sharing and are we currently using Time-Sharing with our operating systems such as Windows and Linux?
 *page 11* In  a  timesharing  system,  if 20 users  are  logged  in  and  17  of them  are  thinking  or talking  or  drinking  coffee,  the  CPU  can  be  allocated  in  turn  to  the  three jobs  that  want  service.  Since  people  debugging programs  usually  issue  short  commands  (e.g.,  compile  a five-page pro-ceduref)  rather  than  long  ones  (e.g.,  sort  a million-record  file),  the  computer  can  provide fast,  interactive  service to a number of users and perhaps also work on big batch jobs  in  the  background  when  the  CPU  is  otherwise  idle. 

*page 36*   **Key  concept  in  all  operating  systems  is  the process**.  A  process  is  basically  a  program  in  execution.  Associated  with  each process  is  its  address  space,  a  list  of  memory  locations  from  0  to  some  maximum,  which  the  process  can  read  and  write. The address space contains  die executable program, the program's data, and its  stack.  Also  associated  with  each  process  is  a  set  of resources,  commonly  in-cluding registers  (including  the  program  counter  and  stack  pointer),  a  list  of open files,  outstanding  alarms,  lists  of  related  processes,  and  all  the  other  information  needed  to  run  the  program.   A  process  is  fundamentally  a  container  that  holds  all  the  information  needed  to  run  a program. We will come back to the process concept in much more detail  in Chap.  2, but for the  time  being,  **the  easiest  way  to  get  a  good  intuitive  feel  for  a  process  is  to  think about a multiprogramming system**. The user may have a stalled  a  video edit-ing  program  and  instructed  it  to  convert  a  one-hour  video  to  a  certain  format  (something  that  can  take  hours)  and  then  gone  off to  surf  the Web.  Meanwhile,  a  background  process  that  wakes  up  periodically  to  check  for incoming  e-mail  may  have started running. Thus  we have  (at least)  three active processes:  the video edi-tor,  the Web  browser,  and  the  e-mail  receiver.  Periodically,  the  operating  system  decides  to  stop  running  one  process  and  start  running  another;  for  example,  be-cause the first one  has  used  up  more  than  its share of CPU  time  in  the past second or two.