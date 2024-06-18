#include <bits/stdc++.h>
using namespace std;

void counting_sort(int A[] , int N) {
    int maxm = INT_MIN;
    for (int i = 0 ; i < N ; i++) {
        maxm = max(maxm  , A[i]);
    }

    vector<int> aux(maxm+1 , 0);
    for( int i = 0 ; i < N ; i ++) {
        aux[A[i]]++;
    }
    int ptr = 0;
    for( int i = 0 ; i <= maxm ; i++) {
        int temp = aux[i];
        while (temp--) {
            A[ptr] = i;
            ptr++;
        }
    }
}