# Segment trees
## Usage
Segment tree is used where there are __Multiple range queries on array__ and 
__modifications of elements__ on the same array.

+ i.e. [Spoj Rangesum](https://www.spoj.com/problems/RANGESUM/fbclid=IwAR1mZQJiOUpais0ZMHYxaTpN5bdNnrg-Py3Q1vbBAL6s390340hrwv5fibI) this question has __two types__ of queries and __multiple queries__ which is _the best problem_ to solve using __Segment Tree__

## What is Segment Tree?
__Segment tree__ is a __binary tree__ used for _storing_ the _intervals_ or _segments_. Each node in the Segement Tree __represets an interval__. 
+ Consider an array _**A**_,size of array **_N_**,Segment Tree corresponding with the array **_T_**
    1. The __root__ of __*T*__ will represent the whole array **_A_**[0: **_N_**].
    2. Each leaf in the __Segment Tree__ __*T*__ will represent a single element (itself).
    3. If node _A1_ is __the parent__ of _A2_ & _A3_ and **_A1_[ I : J ]** 
        1. then **_A2_[ I : J/2 ]**  
        2. ___A3_[(J / 2) + 1 : J ]__
    4. The __Height__ of the Segment Tree will be  $k_{n+1}$ $n^2$