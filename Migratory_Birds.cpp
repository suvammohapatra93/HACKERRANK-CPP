
// HackerRank -> Migratory Birds -> https://hackerrank.com/challenges/migratory-birds/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

int migratoryBirds(vector<int> arr)
{
    unordered_map<int, int> birdCount; // Map to store bird type counts
    int maxCount = 0;                  // Variable to track the highest frequency
    int result = INT_MAX;              // Variable to store the smallest bird ID with max count

    // Count the frequency of each bird type
    for (int bird : arr)
    {
        birdCount[bird]++;
        if (birdCount[bird] > maxCount)
        {
            maxCount = birdCount[bird];
            result = bird; // Update the result to this bird type
        }
        else if (birdCount[bird] == maxCount)
        {
            result = min(result, bird); // Choose the smaller ID in case of tie
        }
    }

    return result;
}

int main()
{
    int n;
    cin >> n; // Number of bird sightings
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Input bird sightings
    }

    cout << migratoryBirds(arr) << endl; // Output the result
    return 0;
}

//! Time Complexity = O(N)
//! Space Complexity = O(k) -> k : number of unique birds.