
#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(vector<vector<int>> arr)
{
    int n = arr.size();   // Matrix size
    int primarySum = 0;   // Left-to-right diagonal sum
    int secondarySum = 0; // Right-to-left diagonal sum

    for (int i = 0; i < n; i++)
    {
        primarySum += arr[i][i];           // Elements where i == j
        secondarySum += arr[i][n - i - 1]; // Elements where i + j == n - 1
    }

    return abs(primarySum - secondarySum); // Return the absolute difference
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int difference = diagonalDifference(arr);

    cout << difference << "\n";
    return 0;
}

//! Time Complexity = O(N^2)
//! Space Complexity = O(N^2)