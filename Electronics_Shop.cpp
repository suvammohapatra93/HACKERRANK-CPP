
//HackerRank : Electronics Shop :  https://www.hackerrank.com/challenges/electronics-shop/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int maxSpend = -1; // Initialize to -1 to indicate no valid combination found

    // Iterate through each keyboard price
    for (int k : keyboards) {
        // Iterate through each drive price
        for (int d : drives) {
            int totalCost = k + d;
            // Check if the total cost is within the budget and higher than maxSpend
            if (totalCost <= b && totalCost > maxSpend) {
                maxSpend = totalCost;
            }
        }
    }

    return maxSpend; // Return the maximum spendable amount, or -1 if not possible
}