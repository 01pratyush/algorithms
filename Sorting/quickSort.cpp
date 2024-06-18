#include <bits/stdc++.h>
using namespace std;

int partition(int A[] , int start , int end) {
    int i = start + 1;
    int pivot = A[start];
    for ( int j = start + 1 ; j <= end ; j ++) {
        if (A[j] < pivot) {
            swap(A[i] , A[j]);
            i++;
        }
    }
    swap(A[i-1] , A[start]);
    return i-1;
}

int rand_partition(int A[] , int start , int end) {
    int randm = start + rand()%(end-start +1);

    swap(A[start] , A[randm]);
    return partition(A , start , end);
}

void quick_sort(int A[] , int start , int end) {
    if (start < end) {
        int piv_pos = rand_partition(A , start , end);
        
        quick_sort(A , start , piv_pos-1);
        quick_sort(A , piv_pos+1 , end);
    }
}