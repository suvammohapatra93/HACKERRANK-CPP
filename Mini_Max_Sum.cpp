
#include <bits/stdc++.h>

using namespace std;

void miniMaxSum(vector<int> arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());

    long long maxSum = 0;
    long long minSum = 0;

    for (int i = 1; i < n; i++)
    {
        maxSum += arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        minSum += arr[i];
    }

    cout << minSum << " " << maxSum << "\n";
}

int main()
{
    cout << "Enter the value of n: " << "\n";
    int n;
    cin >> n;
    vector<int> array(n);
    cout << "Enter the values of array" << "\n";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    miniMaxSum(array);

    return 0;
}

//! Time Complexity = O(nlogn)
//! Space Complexity = O(1)