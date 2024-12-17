
//HackerRank : Sales by match : https://www.hackerrank.com/challenges/sock-merchant/problem?isFullScreen=true

#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector<int> ar) {
    unordered_map<int, int> sockCount;
    int pairCount = 0;
    
    // Count the frequency of each sock
    for (int sock : ar) {
        sockCount[sock]++;
    }
    
    // Calculate the number of pairs for each sock color
    for (auto &entry : sockCount) {
        pairCount += entry.second / 2;
    }
    
    return pairCount;
}

int main() {
    int n;
    cin >> n;

    if (n <= 0) { // Optional: Validation for non-positive `n`
        return 0; 
    }

    vector<int> array(n);
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << sockMerchant(array.size(), array) << endl; 

    return 0;
}


//! Time Complexity = O(N)
//! Space Complexity = O(k) -> number of sock pairs