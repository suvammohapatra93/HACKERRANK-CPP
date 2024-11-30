
// HackerRank
/* 1st step -> multiples of first array*/
/* 2nd step -> factors of first array*/

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Helper function to calculate LCM of two numbers
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

// Function to calculate LCM of an array
int lcmArray(const vector<int> &arr)
{
    int result = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        result = lcm(result, arr[i]);
    }
    return result;
}

// Function to calculate GCD of an array
int gcdArray(const vector<int> &arr)
{
    int result = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        result = gcd(result, arr[i]);
    }
    return result;
}

int getTotalX(vector<int> a, vector<int> b)
{
    // Step 1: Find LCM of array 'a'
    int lcmA = lcmArray(a);

    // Step 2: Find GCD of array 'b'
    int gcdB = gcdArray(b);

    // Step 3: Count numbers that are multiples of lcmA and divisors of gcdB
    int count = 0;
    for (int i = lcmA; i <= gcdB; i += lcmA)
    {
        if (gcdB % i == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    vector<int> a = {2, 4};
    vector<int> b = {16, 32, 96};

    cout << getTotalX(a, b) << endl;
    return 0;
}

//! Time Complexity = O(n+m+k)
//! Space Complexity = O(1)