// Language it is spelled (and pronounced) reversely. For example, a Berlandish word code corresponds to a Birlandish word edoc.

// Input
// The first line contains word s, the second line contains word t. The words consist of lowercase Latin letters. The input data do not consist unnecessary spaces. The words are not empty and their lengths do not exceed 100 symbols.

// Output
// If the word t is a word s, written reversely, print YES, otherwise print NO.
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, t;
    getline(std::cin, s);
    getline(std::cin, t);
    reverse(s.begin(), s.end());
    if (s == t)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}