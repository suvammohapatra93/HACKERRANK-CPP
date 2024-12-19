
//hACKERrANK : COUNTING VALLEYS : https://www.hackerrank.com/challenges/counting-valleys/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

int countingValleys(int n,string path){
    int level = 0;
    int valleys = 0;

    for(int it : path){
        if(it == 'U'){
            level++;
            
            if(level == 0){
                valleys++;
            }
        }else if(it == 'D'){
            level--;
        }
    }

    return valleys;
}

int main(){
    int n;
    cin >> n;
    string path;
    cin >> path;

    cout << countingValleys(n,path) << endl;

    return 0;
}

//! Time Complexity = O(path.size()) -> O(N)
//! Space Complexity = O(1)