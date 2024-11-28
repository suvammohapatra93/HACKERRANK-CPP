
// HACKERRANK -> APPLES AND MANGOES

#include <bits/stdc++.h>
using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    int applesCount = 0, orangesCount = 0;

    for (int i = 0; i < apples.size(); i++)
    {
        int landingPosition = apples[i] + a; // Calculate landing position
        if (landingPosition >= s && landingPosition <= t)
        {
            applesCount++;
        }
    }

    for (int i = 0; i < oranges.size(); i++)
    {
        int landingPosition = oranges[i] + b; // Calculate landing position
        if (landingPosition >= s && landingPosition <= t)
        {
            orangesCount++;
        }
    }

    cout << applesCount << "\n"
         << orangesCount << "\n";
}

int main()
{
    int s, t, a, b;
    cout << "Enter the value of s and t:\n";
    cin >> s >> t;
    cout << "Enter the value of a and b:\n";
    cin >> a >> b;

    cout << "Enter the value of m and n:\n";
    int m, n;
    cin >> m >> n;
    cout << "Enter the values of apples:\n";
    vector<int> apples(m);
    for (int i = 0; i < m; i++)
    {
        cin >> apples[i];
    }

    cout << "Enter the values of oranges:\n";
    vector<int> oranges(n);
    for (int i = 0; i < n; i++)
    {
        cin >> oranges[i];
    }

    countApplesAndOranges(s, t, a, b, apples, oranges);
}

//! Time Complexity = O(m+n)
//! Space Complexity = O(1)