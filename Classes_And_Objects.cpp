
//HackerRank -> Classes and Objects -> https://www.hackerrank.com/challenges/classes-objects/problem?isFullScreen=true

#include <iostream>
#include <vector>
using namespace std;

// Define the Student class
class Student {
private:
    vector<int> scores; // Vector to store scores

public:
    // Method to input scores
    void input() {
        for (int i = 0; i < 5; i++) {
            int score;
            cin >> score;
            scores.push_back(score);
        }
    }

    // Method to calculate the total score
    int calculateTotalScore() {
        int total = 0;
        for (int score : scores) {
            total += score;
        }
        return total;
    }
};

int main() {
    int n; // Number of students
    cin >> n;

    //Passing the class directly instead of variable
    vector<Student> students(n);

    // Input scores for each student
    for (int i = 0; i < n; i++) {
        students[i].input();
    }

    // Calculate the first student's total score
    int kristenScore = students[0].calculateTotalScore();

    // Determine how many students scored higher than Kristen
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].calculateTotalScore() > kristenScore) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}


//! Time Complexity = O(N)
//! Space Complexity = O(N) -> For the vector storing the student class.
