
//HackerRank : Bill Division : https://www.hackerrank.com/challenges/bon-appetit/problem?isFullScreen=true

#include <iostream>
#include <vector>
using namespace std;

void bonAppetit(vector<int> bill, int k, int b) {
    // Calculate total cost excluding the k-th item
    int totalCost = 0;
    for (int i = 0; i < bill.size(); ++i) {
        if (i != k) {
            totalCost += bill[i];
        }
    }

    // Anna's actual share
    int annaShare = totalCost / 2;

    // Compare Anna's share with the amount charged
    if (b == annaShare) {
        cout << "Bon Appetit" << endl;
    } else {
        cout << b - annaShare << endl; // Overcharged amount
    }
}

int main() {
    // Input size of the bill array and the k-th item
    int n, k;
    cin >> n >> k;

    // Input the bill array
    vector<int> bill(n);
    for (int i = 0; i < n; ++i) {
        cin >> bill[i];
    }

    // Input the amount charged to Anna
    int b;
    cin >> b;

    bonAppetit(bill, k, b);

    return 0;
}


//! Time Complexity = O(N)
//! Space Complexity = O(1)