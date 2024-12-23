
//HackerRank : Forming a Magic Square : https://www.hackerrank.com/challenges/magic-square-forming/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

// All possible 3x3 magic squares
const vector<vector<int>> magicSquares = {
    {8, 1, 6, 3, 5, 7, 4, 9, 2},
    {6, 1, 8, 7, 5, 3, 2, 9, 4},
    {4, 9, 2, 3, 5, 7, 8, 1, 6},
    {2, 9, 4, 7, 5, 3, 6, 1, 8},
    {8, 3, 4, 1, 5, 9, 6, 7, 2},
    {4, 3, 8, 9, 5, 1, 2, 7, 6},
    {6, 7, 2, 1, 5, 9, 8, 3, 4},
    {2, 7, 6, 9, 5, 1, 4, 3, 8}
};

int formingMagicSquare(vector<vector<int>> s) {
    int minCost = INT_MAX;
    vector<int> input;

    // Flatten the 2D input into a 1D vector
    for (const auto& row : s) {
        for (int num : row) {
            input.push_back(num);
        }
    }

    // Compare with all possible magic squares
    for (const auto& magic : magicSquares) {
        int cost = 0;
        for (size_t i = 0; i < 9; ++i) {
            cost += abs(input[i] - magic[i]);
        }
        minCost = min(minCost, cost);
    }

    return minCost;
}

int main() {
    vector<vector<int>> s(3, vector<int>(3));
    // Input the 3x3 matrix
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> s[i][j];
        }
    }

    cout << formingMagicSquare(s) << endl;
    return 0;
}


//! Time Complexity = O(1) instead of O(n^2) because we are using only 8 inputs.
//! Space Complexity = O(1) we are not using any kind of dynamic memory here.
