
//HackerRank : Beautiful days at the movies : https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem?isFullScreen=true


#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int beautifulDays(int i, int j, int k) {
    int count = 0;

    for (int day = i; day <= j; ++day) {
        int reversedDay = reverseNumber(day);
        if (abs(day - reversedDay) % k == 0) {
            ++count;
        }
    }

    return count;
}


int main(){
    int i,j,k;
    cin >> i >> j >> k;

    cout << beautifulDays(i,j,k) << endl;

    return 0;
}

//! Time Complexity = O(n)
//! Space Complexity = O(1)