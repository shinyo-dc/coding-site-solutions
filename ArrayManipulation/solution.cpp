#include <bits/stdc++.h>

using namespace std;

long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long> arr(n, 0);
    long max = 0;
    long sum = 0;
    for (int i = 0; i < queries.size(); i++) {
        arr[queries[i][0]-1] += queries[i][2];
        if (queries[i][1]-1 <= n) 
            arr[queries[i][1]] -= queries[i][2];       
    }
    
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (sum > max) {
            max = sum;
        }
    }
    return max;
}
