#include <stdio.h>
#include <stdlib.h>

#include "merge.c"
#include "partition.c"

/*

    Merge sort, basic merge function
    Author : Colin McCormack
    Date : 1/3/2022

 */

#define MAX_NUMS 100

void outputArray (int *A, int n){
    for (int i = 0; i < n; i++)
        printf ("%i ", A[i]);

}

int main(){

    int A[MAX_NUMS] = {15, 18, 18, 21, 49, 59, 62,
                       3, 9, 11, 17, 19, 29};
    int nA = 13;

    printf ("Before merging ...\n");
    outputArray(A, nA);
    printf ("\n\n");

    merge (A, 0, 7, nA);	// A[0..6] is sorted and A[7..12] is sorted

    printf ("After merging ...\n");
    outputArray(A, nA);
    printf ("\n\n");

    int B[MAX_NUMS] = {68, 21, 78, 25, 43, 87, 3,
                       37, 19, 57, 22, 25, 71};
    int nB = 13;

    // here 68 would be the pivot and since 21, 25, 43, 3, 37, 19, 57
    // 22 and 25 are all less than 68 then 68 would be moved to index 9
    // Read the requirements above for the partition function

    printf ("Before partitioning ...\n");
    outputArray(B, nB);
    printf ("\n\n");

    partition (B, 0, nB);		// define this function

    printf ("After partitioning ...\n");
    outputArray(B, nA);
    printf ("\n\n");

    return 0;

}
