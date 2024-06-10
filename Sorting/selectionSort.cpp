#include <bits/stdc++.h>
using namespace std;

void selection_sort(int A[] , int n) {

    for ( int i = 0 ; i < n ; i ++) {
        int minimum = i;

        for ( int j = i +1 ; j < n ; j ++) {
            if (A[j] < A[minimum]) minimum = j;
        }

        swap(A[i], A[minimum]);
    }

}


