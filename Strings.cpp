
// HackerRank -> Strings

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Input two strings
    string a, b;
    cin >> a >> b;

    // Output the lengths of both strings
    cout << a.length() << " " << b.length() << endl;

    // Output the concatenated string
    cout << a + b << endl;

    // Swap the first characters of the strings
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    // Output the modified strings
    cout << a << " " << b << endl;

    return 0;
}

//! Time Complexity = O(N+M)
//! Space Complexity = O(N+M)