
// HackerRank -> Breaking The Records

#include <bits/stdc++.h>
using namespace std;

vector<int> breakingRecords(vector<int> scores)
{
    vector<int> ans(2, 0); // ans[0]: max breaks, ans[1]: min breaks
    int min = scores[0];   // Initialize min with the first score
    int max = scores[0];   // Initialize max with the first score

    for (auto it : scores)
    {
        if (it > max)
        { // New maximum found
            max = it;
            ans[0]++;
        }
        if (it < min)
        { // New minimum found
            min = it;
            ans[1]++;
        }
    }

    return ans;
}

int main()
{
    cout << "Enter the no of elements of the array : " << "\n";
    int n;
    cin >> n;

    cout << "Enter the elements of the array: " << "\n";
    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    vector<int> result = breakingRecords(array);

    for (auto it : result)
    {
        cout << it << " ";
    }

    return 0;
}

//! Time Complexity = O(N)
//! Space Complexity = O(1)