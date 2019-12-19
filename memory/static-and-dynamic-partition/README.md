# Static and Dynamic Partition

## What are static partitions? 
With  a  bitmap,  memory  is  divided  into  allocation  units  as  small  as  a  few  words  and as  large  as  several  kilobytes.  Corresponding to  each  allocation  unit is a bit  in  the  bitmap,  which  is  0  if  the  unit  is  free  and  1  if  it  is  occupied  (or  vice  versa).   Figure  3-6(slides/book 183) shows  part of memory  and  the corresponding bitmap. The  size  of the  allocation  unit is  an important design issue.  The smaller  the  al-location  unit,  the  larger  the  bitmap.   However,  even  with  an  allocation  unit  as  small as 4 bytes,  32 bits of memory  will require only  1  bit of the map.  A memory of **32n** bits will use **n** map bits,  so the bitmap will take up only **1/33**  of memory.  If  the  allocation  unit  is  chosen  large,  the  bitmap  will  be  smaller,  but  appreciable  memory  may  be  wasted  in  the last  unit  of the  process  if the  process  size  is  not  an  exact multiple of the  allocation  unit. 
*page 183* **important page**

## How do we manage free memory in static partitions?
A  bitmap  provides  a  simple  way  to  keep  track  of  memory  words  in  a  fixed  amount  of  memory  because  the  size  of  the  bitmap  depends  only  on  the  size  of  memory  and  the size  of the  allocation  unit.  The  main  problem  is  that  when  it  has  been  decided  to  bring  a  k  unit  process  into  memory,  the  memory  manager  must  search  the bitmap to  find a run of k consecutive 0 bits in  the map.  Searching  a  bitmap  for a  run  of a  given  length  is  a slow  operation  (because the  run  may  straddle  word boundaries in the map);  this is an argument  against bitmaps.

## What is the size of the bitmap in static partitions with 1 GB main memory and partitionsize of 1 KB?
1 GiB / 1024 KiB = 1024² = 2²⁰ => size of Bitmap:  1 MiBit
just store in a row if a partition is allocated.

## What are dynamic partitions?
Memory Management with Linked Lists 
Another way of keeping track of memory is to maintain a linked list of allocated and free memory segments, where a segment either contains a process or is an empty hole between two processes. The memory of Fig. 3-6(a) is represented in Fig. 3-6(c) as a linked list of segments. Each entry in the list specifies a hole (H) or process (P), the address at which it starts, the length, and a pointer to the next entry. In this example, the segment list is kept sorted by address. Sorting this way has the advantage that when a process terminates or is swapped out, updating the list is straightforward. A terminating process normally has two neighbors (except when it is at the very top or bottom of memory). These may be either processes or holes, leading to the four combinations of Fig. 3-7. In Fig. 3-7(a) updating the list requires replacing a P by an H. In Fig. 3-7(b) and Fig. 3-7(c), two entries are coalesced into one, and the list becomes one entry shorter. In Fig. 3-7(d), three entries are merged and two items are removed from the list 


## How do we manage free memory in dynamic partitions?
first fit

best fit

worst fit

quick fit

**page 184 and 185 important to read!**


## Why is the usage of double linked lists better than single linked lists?
Since the process table slot for the terminating process will normally point to the list entry for the process itself, it may be more convenient to have the list as a double-linked list, rather than the single-linked list of Fig. 3-6(c). This structure makes it easier to find the previous entry and to see if a merge is possible. *page 184*


## What happens when we delete an element in a dynamic partition? What happens to the memory and why is it reasonable to do?
When you delete something, there will be a hole in your memory. So your memory can get fragmented. If you delete something with the size of 2048 KiB and you want to insert something new into the memory with the size of 1792 KiB. There will still be a hole of 256 KiB which maybe never gets used, because its to small. So your memory gets fragmented. So you need a segmentation strategy to use space in memory in an effective way.  

## Explain the difference between internal and external fragmentation?

## Name and shortly explain strategies to fill gaps in free memory in dynamic partitions.

## Which strategy is the best one?

## Compare Rotating First Fit and Last Fit using the second example from the slides.

## Design and apply a new strategy called Worst Fit. Use it on the first and second examplefrom the slides.
