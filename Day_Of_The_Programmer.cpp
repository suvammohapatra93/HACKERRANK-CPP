
// HackerRank -> Day of the programmer -> https://www.hackerrank.com/challenges/day-of-the-programmer/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

string dayofTheProgrammer(int year)
{
    string result;

    if (year == 1918)
    {
        // transition year
        result = "26.09.1918";
    }
    // First one -> julian calender
    // Second one -> Gregorian calender
    else if ((year < 1918 && year % 4 == 0) || ((year > 1918 && year % 4 == 0) || (year % 400 == 0 && year % 100 != 0)))
    {
        result = "12.09." + to_string(year);
    }
    else
    {
        // non-leap  year
        result = "13.09." + to_string(year);
    }

    return result;
}

int main()
{
    cout << "Enter year: " << endl;
    int n;
    cin >> n;

    cout << dayofTheProgrammer(n) << endl;

    return 0;
}

//! Time Complexity = O(1)
//! Space Complexity = O(1)