
// HackerRank :- String Stream -> https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem?isFullScreen=true

#include <sstream>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

// Function to parse integers from a comma-separated string
vector<int> parseInts(string str)
{
    vector<int> result;
    stringstream ss(str);
    int number;
    char comma;

    // Extract numbers and skip commas
    while (ss >> number)
    {
        result.push_back(number);
        ss >> comma; // This will skip the comma
    }

    return result;
}

int main()
{
    string str;
    cin >> str;

    vector<int> integers = parseInts(str);

    for (int i : integers)
    {
        cout << i << "\n";
    }

    return 0;
}

//! Time Complexity = O(N) -> n: length of input string
//! Space Complexity = O(M) -> m: number of integers extracted