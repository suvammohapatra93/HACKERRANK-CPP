
//HackerRank : Cats_and_a_Mouse : https://www.hackerrank.com/challenges/cats-and-a-mouse/problem?isFullScreen=true


#include <iostream>
#include <string>
#include <cmath> 

using namespace std;

string catAndMouse(int x, int y, int z) {
    int distanceCatA = abs(z - x); // Distance of cat A from the mouse
    int distanceCatB = abs(z - y); // Distance of cat B from the mouse

    if (distanceCatA < distanceCatB) {
        return "Cat A";
    } else if (distanceCatB < distanceCatA) {
        return "Cat B";
    } else {
        return "Mouse C";
    }
}

int main() {
    int q; 
    cin >> q;
    while (q--) {
        int x, y, z;
        cin >> x >> y >> z;
        cout << catAndMouse(x, y, z) << endl;
    }
    return 0;
}

//! Time Complexityt = O(q)
//! Space Complexityt = O(1)