
// HACKERANK -> Simple Array Sum

#include <bits/stdc++.h>

using namespace std;

int simpleArraySum(vector<int> ar)
{
    int sum = 0;
    for (int i = 0; i < ar.size(); i++)
    {
        sum += ar[i];
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);

    for (int i = 0; i < ar.size(); i++)
    {
        cin >> ar[i];
    }

    int sum = 0;
    for (int i = 0; i < ar.size(); i++)
    {
        sum += ar[i];
    }

    cout << sum << "\n";
    return 0;
}

//! Time Complexity = O(n)
//! Space Complexity = O(n)