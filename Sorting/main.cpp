#include <bits/stdc++.h>
#include "selectionSort.cpp"
#include "insertionSort.cpp"
#include "bubbleSort.cpp"
using namespace std;

int main() {
    int A[] = { 3 , 1 , 2 , 7 , 5 , 6 };
    int n = 6;
    for ( int i  = 0 ; i < n ; i ++) {
        cout << A[i] << " ";
    }
    cout << endl;
    insertion_sort(A , n);
    
    for ( int i = 0 ; i < n ; i ++) {
        cout << A[i] << " ";
    }
    cout << endl;
}