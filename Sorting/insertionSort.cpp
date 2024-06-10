#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int A[] , int n) {

    for (int i = 0 ; i < n ; i ++) {
        // int j = i;
        // while ( j > 0 && A[j]<A[j-1]) {
        //     swap(A[j] , A[j-1]);
        //     j--;
        // }
        int temp = A[i];
        int j = i;
        while ( j > 0 && A[j-1]>temp) {
            A[j] = A[j-1];
            j--;
        }
        A[j] = temp;
    }
}
