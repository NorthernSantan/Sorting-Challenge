//
// Created by colin on 1/5/2022.
//

int partitionSort(int *A, int lo, int hi);

void swapInts (int *a, int *b);

int newPartition(int *A, int lo, int hi);

void QS (int *A, int lo, int hi) {

    int pivot;

    printf ("In QS\n");

    if (lo < hi) {
        pivot = newPartition (A, lo, hi);
        printf ("Pivot is : %i\n", pivot);
        QS (A, lo, pivot - 1);
        QS (A, pivot + 1, hi);
    }

    printf ("Out of QS\n");

}

//int partitionSort(int *A, int lo, int hi) {
//
//    int pivot = A[lo];
//    int *pPivot = &A[lo];
//
//    printf ("Your pivot is : %i\n", pivot);
//
//    while (lo < hi) {
//
//        do {
//            lo++;
//        } while (A[lo] <= pivot && lo < hi);
//
//        do {
//            hi--;
//        } while (A[hi] > pivot);
//
//        if (lo < hi)
//            swapInts (&(A[lo]), &(A[hi]));
//
//    }
//
//    swap (pPivot, &(A[hi]));
//
//    printf ("About to return %i after swapping (%i, %i)\n", lo, *pPivot, A[hi]);
//
//    return lo; // Location of pivot
//
//}

void swapInts (int *a, int *b) {

    int temp = *a;

    *a = *b;

    *b = temp;

}

int newPartition (int *A, int lo, int hi) {

    // Move all fewer elements to the left
    // Move all greater elements to the right

    int pivot = A[lo];
    int *pPivot = &A[lo];

    hi++;

    while (1) {

        // Start by incrementing low away from pivot

        while (A[--hi] > pivot);
        while (A[++lo] < pivot);

        printf ("High element in wrong place at location : %i, with value %i\n", hi, A[hi]);
        printf ("Low element in wrong place at location : %i, with value %i\n", lo, A[lo]);


        if ( ! (lo < hi)) break;

        swapInts(&(A[lo]), &(A[hi]));

        // lo++;

        printf ("Swapped elements are : (%i, %i)\n", A[lo], A[hi]);

    }

    swap (pPivot, &(A[hi]));

    return hi; // Location of pivot

}

