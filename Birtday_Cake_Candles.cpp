
#include <bits/stdc++.h>

using namespace std;
int birthdayCakeCandles(vector<int> candles)
{
    int n = candles.size();
    int count = 0;
    int maxElement = INT_MIN;
    for (int i = 0; i < candles.size(); i++)
    {
        if (candles[i] > maxElement)
        {
            maxElement = candles[i];
            count = 1; // Reset count for new maxElement
        }
        else if (candles[i] == maxElement)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    cout << "Enter the no. of elements in the array: " << "\n";
    int n;
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int answer = birthdayCakeCandles(array);
    cout << answer << "\n";
    return 0;
}

//! Time Complexity = O(N)
//! Space Complexity = O(1)