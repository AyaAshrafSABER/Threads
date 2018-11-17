# Threads

## Matrix Multiplication

 Implementation of  two variations of this algorithm:
	a. The computation of each element of the output matrix happens in a thread.
	b. The computation of each row of the output matrix happens in a thread.

## Merge Sort

 The implementation is using Pthreads. Each time the list is divided:
two threads are created to do merge-sort on each half separately. This step is
repeated recursively until each sub-list has only one element.


