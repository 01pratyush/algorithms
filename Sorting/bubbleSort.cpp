#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int A[] , int n) {

    for ( int i = 0 ; i < n -1 ; i ++) {
        for ( int j = 0 ; j < n-i-1 ; j ++) {
            if (A[j]>A[j+1]) swap(A[j], A[j+1]);
        }
    }

}

