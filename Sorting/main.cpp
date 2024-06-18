#include <bits/stdc++.h>
#include "selectionSort.cpp"
#include "insertionSort.cpp"
#include "bubbleSort.cpp"
#include "mergeSort.cpp"
#include "quickSort.cpp"
#include "heapSort.cpp"
#include "countingSort.cpp"
using namespace std;

int main() {
    int A[] = { 0 , 3 , 1 , 2 , 7 , 5 , 6 };
    int n = 7;
    for ( int i  = 0 ; i < n ; i ++) {
        cout << A[i] << " ";
    }
    cout << endl;
    counting_sort(A , n);
    
    for ( int i = 0 ; i < n ; i ++) {
        cout << A[i] << " ";
    }
    cout << endl;
}