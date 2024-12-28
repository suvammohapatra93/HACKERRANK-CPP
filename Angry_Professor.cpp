
//HACKERRANK: ANGRY PROFESSOR: https://www.hackerrank.com/challenges/angry-professor/problem?isFullScreen=true

#include <iostream>
#include <vector>
using namespace std;

string angryProfessor(int k, vector<int> a) {
    int onTimeCount = 0;

    for (int arrival : a) {
        if (arrival <= 0) { // Student is on time
            onTimeCount++;
        }
        if (onTimeCount >= k) { // No need to continue if we have enough on-time students
            return "NO";
        }
    }

    return "YES"; // Not enough on-time students
}

int main() {
    int k = 3; // Minimum number of students required
    vector<int> a = {-1, -3, 4, 2}; // Arrival times of students

    cout << angryProfessor(k, a) << endl; // Output: YES

    return 0;
}


//! Time Complexity = O(n)
//! Space Complexity = O(1)