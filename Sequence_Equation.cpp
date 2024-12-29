
//HACKERRANK : SEQUENCE EQUATION : https://www.hackerrank.com/challenges/permutation-equation/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

#include <vector>
using namespace std;

vector<int> permutationEquation(vector<int> p) {
    int n = p.size();
    vector<int> position(n + 1); // To store the index of each number in p

    // Build the position map
    for (int i = 0; i < n; ++i) {
        position[p[i]] = i + 1; // Value p[i] is at index i + 1 (1-based indexing)
    }

    vector<int> result;
    for (int x = 1; x <= n; ++x) {
        // Find y such that p[p[y]] = x
        int y = position[position[x]];
        result.push_back(y);
    }

    return result;
}



int main(){

    return 0;
}

//! Time Complexity = O(n)
//! Space Complexity = O(1)