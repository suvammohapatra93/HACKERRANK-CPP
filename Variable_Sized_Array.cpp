
// HackerRank -> Variable sized array

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q; // Number of arrays and queries

    vector<vector<int>> arrays(n); // Create a vector of vectors

    // Input the variable-sized arrays
    for (int i = 0; i < n; i++)
    {
        int size;
        cin >> size;            // Size of the current array
        arrays[i].resize(size); // Resize the i-th array
        for (int j = 0; j < size; j++)
        {
            cin >> arrays[i][j]; // Input elements
        }
    }

    // Process the queries
    for (int k = 0; k < q; k++)
    {
        int a, b;
        cin >> a >> b;                // Query: indices a (array) and b (element in the array)
        cout << arrays[a][b] << endl; // Output the value
    }

    return 0;
}

//! Time Complexity = O(Sum of all array sizes + q)
//! Space Complexity = O(Sum of all array sizes)