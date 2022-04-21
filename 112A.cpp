// Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter.

// Input
// Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

// Output
// If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string stringOne;
    string stringTwo;
    // string stringOne = "aaa";
    // string stringTwo = "aaa";
    getline(cin, stringOne);
    getline(cin, stringTwo);
    transform(stringOne.begin(), stringOne.end(), stringOne.begin(), ::tolower);
    transform(stringTwo.begin(), stringTwo.end(), stringTwo.begin(), ::tolower);
    int lengthOne = stringOne.length();
    int lengthTwo = stringOne.length();
    for (int i = 0; i < lengthOne; i++)
    {
        if (stringOne[i] < stringTwo[i])
        {
            cout << -1;
            break;
        }
        else if (stringOne[i] > stringTwo[i])
        {
            cout << 1;
            break;
        }
        else if (i==lengthOne-1)
        {
            cout << 0;
            break;
        }
        else
        {
            continue;
        }
    }

    return 0;
}