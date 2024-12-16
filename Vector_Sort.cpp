
//HackerRank : Vector Sort : https://www.hackerrank.com/challenges/vector-sort/problem?isFullScreen=true

#include <iostream>
#include <vector>
#include <algorithm> // For sort()

using namespace std;

int main() {
    int n;
    cin >> n; // Input the number of elements

    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i]; // Input the elements of the vector
    }

    // Sort the vector in ascending order
    sort(vec.begin(), vec.end());

    // Print the sorted vector
    for (int i = 0; i < n; ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}

//! Time Complexity = O(n log n)
//! Space Complexity = O(1)