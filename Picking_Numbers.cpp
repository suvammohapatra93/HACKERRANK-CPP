
//HackerRank : Picking Numbers : https://www.hackerrank.com/challenges/picking-numbers/problem?isFullScreen=true


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int pickingNumbers(vector<int> a) {
    // Frequency array to store counts of numbers
    vector<int> frequency(101, 0); 
    // Given that numbers are in the range [0, 100]

    // Count occurrences of each number
    for (int num : a) {
        frequency[num]++;
    }

    int maxCount = 0;

    // Find the maximum count of numbers satisfying the condition
    for (int i = 1; i <= 100; i++) {
        maxCount = max(maxCount, frequency[i] + frequency[i - 1]);
    }

    return maxCount;
}

int main() {
    int n;
    cin >> n; 
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << pickingNumbers(a) << endl;

    return 0;
}


//! Time Complexity = O(N)
//! Space Complexity = O(1)