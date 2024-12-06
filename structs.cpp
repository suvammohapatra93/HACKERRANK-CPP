
// HackerRank -> Structs

#include <iostream>
#include <string>
using namespace std;

// Define a struct
struct Person
{
    int id;
    string first_name;
    string last_name;
    int standard;
};

int main()
{
    // Input for the struct
    Person p;
    cin >> p.id;
    cin >> p.first_name;
    cin >> p.last_name;
    cin >> p.standard;

    // Output the struct values
    cout << p.id << " " << p.first_name << " " << p.last_name << " " << p.standard << endl;

    return 0;
}

//! Time Complexity = O(1)
//! Space Complexity = O(1)