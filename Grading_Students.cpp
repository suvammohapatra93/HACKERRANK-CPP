
#include <bits/stdc++.h>
using namespace std;

vector<int> gradingStudents(const std::vector<int> &grades)
{
    vector<int> roundedGrades; // Create a list to store the rounded grades

    for (int grade : grades)
    { // Go through each grade in the input list
        // Grades less than 38 remain unchanged
        if (grade < 38)
        {
            roundedGrades.push_back(grade); // If grade is less than 38, keep it as it is
        }
        else
        {
            // Find the next multiple of 5
            int nextMultipleOf5 = (grade + 4) / 5 * 5;
            // Example: If grade = 73, (73 + 4) = 77, and 77 / 5 = 15. 15 * 5 = 75.

            // Check if the difference between the next multiple and the grade is small (< 3)
            if (nextMultipleOf5 - grade < 3)
            {
                roundedGrades.push_back(nextMultipleOf5); // Round up to the next multiple of 5
            }
            else
            {
                roundedGrades.push_back(grade); // Otherwise, keep the grade as it is
            }
        }
    }

    return roundedGrades; // Return the new list of rounded grades
}

int main()
{
    int n; // Number of students
    std::cout << "Enter number of students: ";
    std::cin >> n;

    std::vector<int> grades(n);
    std::cout << "Enter grades:" << std::endl;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> grades[i];
    }

    std::vector<int> result = gradingStudents(grades);

    std::cout << "Rounded grades:" << std::endl;
    for (int grade : result)
    {
        std::cout << grade << std::endl;
    }

    return 0;
}

//! Time Complexity = O(N)
//! Space Complexity = O(N)