
#include <bits/stdc++.h>
using namespace std;

long aVeryBigSum(vector<long> ar)
{
    long sum = 0;
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
    vector<long> array(n);

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    long sum = aVeryBigSum(array);

    cout << sum << "\n";

    return 0;
}

//! Time Complexity = O(N)
//! Space Complexity = O(N)