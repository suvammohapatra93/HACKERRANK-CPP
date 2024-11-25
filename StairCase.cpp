
#include <bits/stdc++.h>

using namespace std;

void staircase(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // Print hashes
        for (int j = 0; j <= i; j++)
        {
            cout << "#";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cin >> n;
    staircase(n);
    return 0;
}

//! Time Complexity = O(n^2)
//! Space Complexity = O(1)