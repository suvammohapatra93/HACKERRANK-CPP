
//HACKERRANK : SAVE THE PRISONER : https://www.hackerrank.com/challenges/save-the-prisoner/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;


int saveThePrisoner(int n, int m, int s) {
    return (s - 1 + m - 1) % n + 1;
}



int main(){
    int n,m,s;
    cin >> n >> m >> s;

    cout << saveThePrisoner(n,m,s) << endl;

    return 0;
}

//! Time Complexity = O(1)
//! Space Complexity = O(1)