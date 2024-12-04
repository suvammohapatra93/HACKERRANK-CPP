
// HackerRank -> Divisible Sum -> https://www.hackerrank.com/challenges/divisible-sum-pairs/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((ar[i] + ar[j]) % k == 0)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    cout << "Enter the value of n: " << "\n";
    int n;
    cin >> n;

    cout << "Enter the value of k: " << "\n";
    int k;
    cin >> k;

    cout << "Enter the value of array: " << "\n";
    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << divisibleSumPairs(n, k, array) << "\n";
    return 0;
}

//! Time Complexity = O(N^2)
//! Space Complexity = O(1)