
// HackerRank

#include <bits/stdc++.h>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2)
{
    if (v1 == v2)
    {
        return (x1 == x2) ? "YES" : "NO"; // Same speed, must start at the same point to meet
    }
    // The condition (x2−x1)∗(v2−v1)<0(x2 - x1) * (v2 - v1) < 0(x2−x1)∗(v2−v1)<0 ensures that the kangaroo with the larger initial position has a smaller velocity, otherwise they will never meet.

    // The modulo condition (x2−x1)%(v1−v2)==0(x2 - x1) \% (v1 - v2) == 0(x2−x1)%(v1−v2)==0 checks if the kangaroos meet exactly on an integer jump.

    if ((x2 - x1) * (v2 - v1) < 0 && (x2 - x1) % (v1 - v2) == 0)
    {
        return "YES";
    }

    return "NO";
}

int main()
{
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    cout << kangaroo(x1, v1, x2, v2) << "\n";

    return 0;
}

//! Time Complexity = O(1)
//! Space Complexity = O(1)