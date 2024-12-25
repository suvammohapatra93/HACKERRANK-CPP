
//HackerRank : https://www.hackerrank.com/challenges/designer-pdf-viewer/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

int hurdleRace(int k, vector<int> height) {
    // Find the maximum height of the hurdles
    int maxHurdle = *max_element(height.begin(), height.end());
    
    // Calculate the potions needed
    // If maxHurdle is less than or equal to k, no potions are needed
    int potionsNeeded = max(0, maxHurdle - k);
    
    return potionsNeeded;
}


int main() {
    int k = 4;
    vector<int> height = {1, 6, 3, 5, 2};
    
    cout << "Potions needed: " << hurdleRace(k, height) << endl; // Output: 2
    return 0;
}