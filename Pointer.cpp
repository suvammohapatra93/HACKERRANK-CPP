
// HackerRank

#include <bits/stdc++.h>

using namespace std;

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int sum = a + b; // Regular integers for sum and difference
    int diff = abs(a - b);

    int *sumPtr = &sum; // Pointers pointing to the variables
    int *diffPtr = &diff;

    cout << *sumPtr << "\n"; // Dereference the pointers to print values
    cout << *diffPtr << "\n";

    return 0;
}

//! Time Complexity = O(1)
//! Space Complexity = O(1)