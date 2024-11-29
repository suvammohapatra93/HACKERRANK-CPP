#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sum_of_four(int a, int b, int c, int d)
{
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
    int sum4 = 0;

    sum1 += a;
    sum2 += b;
    sum3 += c;
    sum4 += d;

    // sum2
    if (sum1 < sum2 && sum2 > sum3 && sum2 > sum4)
    {
        return sum2;
    } // sum3
    else if (sum1 < sum3 && sum2 < sum3 && sum3 > sum4)
    {
        return sum3;
    } // sum4
    else if (sum1 < sum4 && sum2 < sum4 && sum3 < sum4)
    {
        return sum4;
    }

    return sum1;
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << sum_of_four(a, b, c, d) << "\n";

    return 0;
}

//! Time Complexity = O(1)
//! Space Complexity = O(1)
