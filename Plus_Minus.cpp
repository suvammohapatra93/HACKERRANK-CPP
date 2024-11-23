#include <bits/stdc++.h>

using namespace std;

void plusMinus(vector<int> arr)
{
    int n = arr.size();
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            negativeCount++;
        }
        else if (arr[i] > 0)
        {
            positiveCount++;
        }
        else
        {
            zeroCount++;
        }
    }

    // Proper floating-point division
    double negativeCountInFraction = (double)negativeCount / n;
    double positiveCountInFraction = (double)positiveCount / n;
    double zeroCountInFraction = (double)zeroCount / n;

    // Ensure precision
    cout << fixed << setprecision(6);
    cout << positiveCountInFraction << "\n";
    cout << negativeCountInFraction << "\n";
    cout << zeroCountInFraction << "\n";
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

    plusMinus(array);
}

//! Time Complexity = O(N)
//! Space Complexity = O(N)