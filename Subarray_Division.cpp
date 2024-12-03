
// HackerRank -> Sub array divison -> https://www.hackerrank.com/challenges/the-birthday-bar/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

int birthday(vector<int> s, int d, int m)
{
    int sum = 0;
    int count = 0;

    // first window
    for (int i = 0; i < m; i++)
    {
        sum += s[i];
    }

    // check condition
    if (sum == d)
    {
        count++;
    }

    // remaining windows
    for (int i = m; i < s.size(); i++)
    {
        sum += s[i];
        sum -= s[i - m]; // remove the first window

        if (sum == d)
        {
            count;
        }
    }

    return count;
}

int main()
{
    int n;
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int d, m;
    cin >> d >> m;

    cout << birthday(array, d, m) << "\n";

    return 0;
}

//! Time Complexity = O(N)
//! Space Complexity = O(1)