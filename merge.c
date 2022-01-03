//
// Created by colin on 1/3/2022.
//

#define MAX_NUMS 100

/*

  Prompt

  Merge two sorted subarrays, A[lo..mid] and A[mid+1..hi]
  to create one sorted subarray A[lo..hi]

  Basically assume that A[lo..mid] is sorted and
  A[mid+1 .. hi] is sorted and your task is to
  ensure that A[lo..hi] is sorted.

  This can easily be accomplished in O(n) time
  complexity!

*/

/*

    Merge Sort

    Solution : Iterate over items until one array has reached the end sorting over each, putting the smaller in new array,
    Next, go over and append remaining array elements from each half of the array,
    Finally, copy new array elements to old array

 */

void merge (int *A, int lo, int mid, int hi){
    int B[MAX_NUMS];	// most will use an additional array to accomplish this task

    int split = mid;
    int i = 0;  // counter

    while ( lo < split && mid < hi ) { // while neither array has reached the end

        if (A[lo] <= A[mid]) {
            B[i] = A[lo];
            lo++;
        } else {
            B[i] = A[mid];
            mid++;
        }

        i++;

    }

    while ( lo < split ) // while there are remaining items to be added
        B[i++] = A[lo++];

    while ( mid < hi ) // while there are remaining items in the second half to be added
        B[i++] = A[hi++];

    for (int i = 0; i < hi; ++i)
        A[i] = B[i];

}

