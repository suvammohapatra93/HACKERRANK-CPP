
// HACKERRANK -> COMPARE THE TRIPLETS

#include <bits/stdc++.h>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b)
{
    int aliceScore = 0;
    int bobScore = 0;

    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            aliceScore++;
        }
        else
        {
            bobScore++;
        }
    }

    return {aliceScore, bobScore};
}

int main()
{
    vector<int> a(3);
    cout << "Enter Alice's triplet (3 numbers): " << "\n";
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    vector<int> b(3);
    cout << "Enter Bob's triplet (3 numbers): " << "\n";
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }

    vector<int> answer = compareTriplets(a, b);

    cout << "Scores: Alice " << answer[0] << ", Bob " << answer[1] << endl;
    return 0;
}
//! Time Complexity = O(1)
//! Space Complexity = O(1)