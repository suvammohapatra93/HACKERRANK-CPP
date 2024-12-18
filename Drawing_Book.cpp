
//HackerRank:
#include <bits/stdc++.h>
using namespace std;


int pageCount(int n, int p){
    if(p == 1 || p == n){
        return 0;
    }
    
    int ans =  1 + (p-2)/2;
    
    if(n%2 == 0){
        return min(ans, (int)(1 + (n-p-1)/2));    
    }
    
    return min((int)(n-p)/2, ans);
}

int main(){
    int n;
    cin >> n;
    int p;
    cin >>p;

    cout << pageCount(n,p) << endl;
    return 0;
}

//! Time Complexity = O(1)
//! Space Complexity = O(1)