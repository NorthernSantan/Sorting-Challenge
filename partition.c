//
// Created by colin on 1/3/2022.
//

#define MAX_NUMS 100

/*

  Prompt

  Use A[lo] as the pivot to partition A[lo..hi]

  What do I mean by "partition"?

  Move A[lo] (the pivot) to a location in the array
  such that all elements to the left of this location
  are less than the pivot and all elements to the right
  are greater than or equal to the pivot.

  For example,

  If A = { 31, 89, 21, 9, 28, 99} then pivot would be 31
  After partitioning, 31 would be moved to index 3 because
  21, 9 and 28 are all less than 31.

  If A = {60, 8, 21, 78, 34, 8, 60, 98, 2, 60, 71, 13} then pivot would be 60
  After partitioning, 60 would be moved to index 6 because 8, 21, 34, 8, 2,
  and 13 are all less than 60.

  The location of the rest of the values would depend on your
  algorithm for accomplishing this task. The only thing for sure
  is that all elements to the left of the pivot location will be
  less than the pivot!

*/

void swap (int *a, int *b) {

    int *ptr;

    ptr = a;

    a = b;

    b = ptr;

}

void partition (int *A, int lo, int hi) {


    /*

        Partition logic

        Put the pivot in a location where all elements less than it are before, and all greater are after
        To do this, I will need a swap function and will move each element rightwards if it is greater than partition



     */

}
