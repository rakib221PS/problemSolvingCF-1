// The word HoUse must be replaced with house, and the word ViP — with VIP. If a word contains an equal number of uppercase and lowercase letters, you should replace all the letters with lowercase ones. For example, maTRIx should be replaced by matrix.

// Input
// The first line contains a word s — it consists of uppercase and lowercase Latin letters and possesses the length from 1 to 100.

// Output
// Print the corrected word s.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string line;
    int numberOfUpperCaseLetter = 0, numberOfLowerCaseLetter = 0;
    getline(std::cin, line);
    int shift = 'a' - 'A';
    // cin>>line;
    for (int i = 0; i < line.size(); i++)
    {
        if (line[i] >= 'A' && line[i] <= 'Z')
        {
            numberOfUpperCaseLetter++;
        }
        else
        {
            numberOfLowerCaseLetter++;
        }
    }
    if (numberOfLowerCaseLetter >= numberOfUpperCaseLetter)
    {
        for (int i = 0; i < line.size(); i++)
        {
            if (line[i] >= 'A' && line[i] <= 'Z')
            {
                line[i] = line[i] + shift;
            }
        }
    }
    else
    {
        for (int i = 0; i < line.size(); i++)
        {
            if (line[i] >= 'a' && line[i] <= 'z')
            {
                line[i] = line[i] - shift;
            }
        }
    }

    cout << line;
    return 0;
}