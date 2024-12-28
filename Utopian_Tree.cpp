
//HACKERRANK : UTOPIAN TREE : https://www.hackerrank.com/challenges/utopian-tree/problem?isFullScreen=true


#include <bits/stdc++.h>
using namespace std;

int utopianTree(int n) {
    int height = 1; // Initial height of the tree
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1) { // Odd cycle: Spring
            height *= 2;
        } else { // Even cycle: Summer
            height += 1;
        }
    }
    return height;
}

int main(){
    int n;
    cin >> n;

    cout << utopianTree(n) << endl;

    return 0;
}

//! Time Complexity = O(n)
//! Space Complexity = O(1)