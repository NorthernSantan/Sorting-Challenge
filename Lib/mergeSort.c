//
// Created by colin on 1/5/2022.
//

#define MAX_NUMS 100

void mergeSort(int *A, int lo, int mid, int hi);

void MS (int *A, int lo, int hi) {

    int mid;

    if (lo < hi) {
        mid = lo + (hi - lo)/2;
        MS(A, lo, mid);
        MS(A, mid + 1, hi);

        mergeSort (A, lo, mid, hi);
    }

}

void mergeSort(int *A, int lo, int mid, int hi) {

    // First for merge sort try to go through the two sorted arrays inserting all the elements in order
    // Next go over remaining array members in a cleanup run on each side

    // Find lengths of subarrays (length of each section to be merged)
    int n1 = mid - lo + 1; // Will also store middle element if needed
    int n2 = hi - mid;

    // Make two sub arrays and combine them
    int L[n1], R[n2];

    // Populate two arrays
    // printf (" The inital arrays are : ");

    for (int j = 0; j < n1; ++j) {
        L[j] = A[lo + j];
        // printf ("%i, ",L[j]);
    }

    // printf ("\n");

    for (int j = 0; j < n2; ++j) {
        R[j] = A[mid + j + 1];
        // printf ("%i, ",R[j]);
    }

    // printf ("\n");
    // printf ("\n");

    // Initialize counters
    int i = 0, j = 0;
    int counter = lo;

    while (i < n1 && j < n2) {

        if (L[i] <= R[j]) {
            A[counter] = L[i];
            i++;
        } else {
            A[counter] = R[j];
            j++;
        }

        counter++;

    }

    while (i < n1) {
        A[counter] = L[i];
        i++;
        counter++;
    }

    while (j < n2) {
        A[counter] = R[j];
        j++;
        counter++;
    }

}