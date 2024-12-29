
//HACKERRANK : CIRCULAR ARRAY ROTATION : https://www.hackerrank.com/challenges/circular-array-rotation/problem?isFullScreen=true


#include <bits/stdc++.h>
using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    int n = a.size();
    k = k % n; // Normalize k to avoid unnecessary full rotations

    vector<int> result;
    for (int query : queries) {
        // Compute the index after k rotations
        int rotatedIndex = (query - k + n) % n;
        result.push_back(a[rotatedIndex]);
    }

    return result;
}

//! Time Complexity = O(queries)
//! Space Complexity = O(1)