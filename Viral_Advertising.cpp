
//HACKERRANK : VIRAL ADVERTISING : https://www.hackerrank.com/challenges/strange-advertising/problem?isFullScreen=true


#include <bits/stdc++.h>
using namespace std;

int viralAdvertising(int n) {
    int totalLikes = 0;
    int shared = 5; // Initial number of people the ad is shared with

    for (int day = 1; day <= n; ++day) {
        int liked = shared / 2; // Half of the people like the ad
        totalLikes += liked;   // Add the likes to the total
        shared = liked * 3;    // Each like results in sharing with 3 new people
    }

    return totalLikes;
}


int main(){
    int n;
    cin >> n;

    cout << viralAdvertising(n) << endl;

    return 0;
}