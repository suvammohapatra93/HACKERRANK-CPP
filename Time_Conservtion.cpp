#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s)
{
    // Extract the time components
    string hour = s.substr(0, 2);   // First two characters represent the hour
    string minute = s.substr(3, 2); // Characters 4 and 5 represent the minutes
    string second = s.substr(6, 2); // Characters 7 and 8 represent the seconds
    string period = s.substr(8, 2); // Last two characters represent AM/PM

    int hourInt = stoi(hour); // Convert the hour string to an integer

    if (period == "AM")
    {
        // For AM, the hour "12" should be converted to "00"
        if (hourInt == 12)
        {
            hour = "00";
        }
    }
    else if (period == "PM")
    {
        // For PM, add 12 to the hour unless it is "12"
        if (hourInt != 12)
        {
            hourInt += 12;
            hour = to_string(hourInt);
        }
    }

    // Combine the parts into the final 24-hour time format
    return hour + ":" + minute + ":" + second;
}

int main()
{
    string s;
    cout << "Enter time in 12-hour format (hh:mm:ssAM/PM): ";
    cin >> s;

    string result = timeConversion(s);
    cout << "Time in 24-hour format: " << result << endl;

    return 0;
}

//! Time Complexity = O(1)
//! Space Complexity = O(1)