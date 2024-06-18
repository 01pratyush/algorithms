#include <bits/stdc++.h>
using namespace std;

void merge(int A[] , int start , int mid , int end) {
    int p = start , q = mid + 1;
    int aux[end-start+1] , k = 0;

    for ( int i = start ; i <= end ; i ++) {
        if (p > mid) aux[k] = A[q++];
        else if (q > end) aux[k] = A[p++];
        else if (A[p] < A[q]) aux[k] = A[p++];
        else aux[k] = A[q++];

        k++;
    }
    for ( int i = 0 ; i < k ; i ++) {
        A[start++] = aux[i];
    }
}

void merge_sort(int A[] , int start , int end) {
    if (start < end) {
        int mid = (start + end) /2;
        merge_sort(A , start , mid );

        merge_sort(A , mid +1 , end);

        merge(A , start , mid , end);
    }
}