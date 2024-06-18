#include <bits/stdc++.h>
#include "../../Data Structures/Heap/maxHeap.cpp"
using namespace std;

void heap_sort(int A[] , int N) {
    build_maxHeap(A, N);
    
    for ( int i = N ; i>= 2 ; i--) {
        swap(A[1] , A[i]);
        max_heapify(A , 1 , i-1);
    }
}