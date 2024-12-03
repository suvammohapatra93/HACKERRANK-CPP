
// HackerRank -> Attribute Parser -> https://www.hackerrank.com/challenges/attribute-parser/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

// Function to parse the tags and attributes
void parseTags(int n, unordered_map<string, unordered_map<string, string>> &tagMap)
{
    string currentPath = "";
    for (int i = 0; i < n; i++)
    {
        string line;
        getline(cin, line);

        if (line[1] == '/')
        { // Closing tag
            size_t pos = currentPath.rfind('.');
            if (pos != string::npos)
            {
                currentPath = currentPath.substr(0, pos); // Remove the last tag
            }
            else
            {
                currentPath = "";
            }
        }
        else
        { // Opening tag
            size_t spacePos = line.find(' ');
            string tagName = line.substr(1, (spacePos == string::npos ? line.size() - 2 : spacePos - 1));

            // Update current path
            currentPath += (currentPath.empty() ? "" : ".") + tagName;

            if (spacePos != string::npos)
            { // Attributes exist
                string attributes = line.substr(spacePos + 1);
                attributes.pop_back(); // Remove trailing '>'

                stringstream attrStream(attributes);
                string key, equals, value;
                while (attrStream >> key >> equals >> value)
                {
                    // Remove quotes from the value
                    value = value.substr(1, value.size() - 2);
                    tagMap[currentPath][key] = value;
                }
            }
        }
    }
}

// Function to handle and answer queries
void handleQueries(int q, unordered_map<string, unordered_map<string, string>> &tagMap)
{
    for (int i = 0; i < q; i++)
    {
        string query;
        getline(cin, query);

        size_t tildePos = query.find('~');
        string tagPath = query.substr(0, tildePos);
        string attributeName = query.substr(tildePos + 1);

        // Check if the path and attribute exist
        if (tagMap.find(tagPath) != tagMap.end() && tagMap[tagPath].find(attributeName) != tagMap[tagPath].end())
        {
            cout << tagMap[tagPath][attributeName] << endl;
        }
        else
        {
            cout << "Not Found!" << endl;
        }
    }
}

int main()
{
    int n, q;
    cin >> n >> q;
    cin.ignore(); // Ignore the newline after reading integers

    unordered_map<string, unordered_map<string, string>> tagMap;

    parseTags(n, tagMap);
    handleQueries(q, tagMap);

    return 0;
}

//! Time Complexity = O(N+Q)
//! Space Complexity = O(K)