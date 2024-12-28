
// HackerRank : Climbing the leaderboard : https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem?isFullScreen=true

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    // Remove duplicates from the ranked vector
    vector<int> uniqueRanks;
    for (int score : ranked) {
        if (uniqueRanks.empty() || uniqueRanks.back() != score) {
            uniqueRanks.push_back(score);
        }
    }
    
    // Result vector to store the ranks of the player
    vector<int> result;
    int n = uniqueRanks.size();
    int index = n - 1; // Start from the last rank

    // Iterate through each player score
    for (int score : player) {
        // Compare player's score with the ranked scores
        while (index >= 0 && score >= uniqueRanks[index]) {
            index--; // Move up the leaderboard
        }
        result.push_back(index + 2); // Rank is 1-based
    }
    
    return result;
}

// Main function for testing
int main() {
    vector<int> ranked = {100, 90, 90, 80, 75, 60};
    vector<int> player = {50, 65, 77, 90, 102};
    
    vector<int> result = climbingLeaderboard(ranked, player);
    
    for (int rank : result) {
        cout << rank << endl;
    }
    
    return 0;
}
