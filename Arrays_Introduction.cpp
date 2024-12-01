#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; // Number of elements in the array
    cin >> n;

    vector<int> arr(n); // Create a vector to hold n integers

    // Read the array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Print the array in reverse order
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl; // Print a newline after the output

    return 0;
}
