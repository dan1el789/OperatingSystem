# Static and Dynamic Partition

## What are static partitions? 
With  a  bitmap,  memory  is  divided  into  allocation  units  as  small  as  a  few  words  and as  large  as  several  kilobytes.  Corresponding to  each  allocation  unit is a bit  in  the  bitmap,  which  is  0  if  the  unit  is  free  and  1  if  it  is  occupied  (or  vice  versa).   Figure  3-6(slides/book 183) shows  part of memory  and  the corresponding bitmap. The  size  of the  allocation  unit is  an important design issue.  The smaller  the  al-location  unit,  the  larger  the  bitmap.   However,  even  with  an  allocation  unit  as  small as 4 bytes,  32 bits of memory  will require only  1  bit of the map.  A memory of **32n** bits will use **n** map bits,  so the bitmap will take up only **1/33**  of memory.  If  the  allocation  unit  is  chosen  large,  the  bitmap  will  be  smaller,  but  appreciable  memory  may  be  wasted  in  the last  unit  of the  process  if the  process  size  is  not  an  exact multiple of the  allocation  unit. 
*page 183* **important page**

## How do we manage free memory in static partitions?
A  bitmap  provides  a  simple  way  to  keep  track  of  memory  words  in  a  fixed  amount  of  memory  because  the  size  of  the  bitmap  depends  only  on  the  size  of  memory  and  the size  of the  allocation  unit.  The  main  problem  is  that  when  it  has  been  decided  to  bring  a  k  unit  process  into  memory,  the  memory  manager  must  search  the bitmap to  find a run of k consecutive 0 bits in  the map.  Searching  a  bitmap  for a  run  of a  given  length  is  a slow  operation  (because the  run  may  straddle  word boundaries in the map);  this is an argument  against bitmaps.

## What is the size of the bitmap in static partitions with 1 GB main memory and partitionsize of 1 KB?
1 GiB / 1024 KB = 1024² = 2²⁰ => size of Bitmap:  1 MiBit

## What are dynamic partitions?

## How do we manage free memory in dynamic partitions?

## Why is the usage of double linked lists better than single linked lists?

## What happens when we delete an element in a dynamic partition? What happens to thememory and why is it reasonable to do?

## Explain the difference between internal and external fragmentation?

## Name and shortly explain strategies to fill gaps in free memory in dynamic partitions.

## Which strategy is the best one?

## Compare Rotating First Fit and Last Fit using the second example from the slides.

## Design and apply a new strategy called Worst Fit. Use it on the first and second examplefrom the slides.
