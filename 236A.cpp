// If the number of distinct characters in one's user name is odd, then he is a male, otherwise she is a female. You are given the string that denotes the user name.

// Input
// The first line contains a non-empty string, that contains only lowercase English letters — the user name. This string contains at most 100 letters.

// Output
// If it is a female by our hero's method, print "CHAT WITH HER!" (without the quotes), otherwise, print "IGNORE HIM!" (without the quotes).

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    getline(cin, name);
    sort(name.begin(), name.end());
    // cout << name << endl;
    int numberOfDisCharacters = 0;
    for (int i = 0; i < name.size(); i++)
    {
        if (name[i] != name[i + 1])
        {
            numberOfDisCharacters++;
        }
    }

    if (numberOfDisCharacters % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}