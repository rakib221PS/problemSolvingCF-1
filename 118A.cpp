
// deletes all the vowels,
// inserts a character "." before each consonant,
// replaces all uppercase consonants with corresponding lowercase ones.
// Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.

// Input
// The first line represents input string of Petya's program. This string only consists of uppercase and lowercase Latin letters and its length is from 1 to 100, inclusive.
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    getline(cin, name);
    transform(name.begin(), name.end(), name.begin(), ::tolower);
    // cout<<name;
    for (int i = 0; i < name.size(); i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' || name[i] == 'y' || name[i] == ' ')
        {
            continue;
        }
        else
        {
            cout << "." << name[i];
        }
    }
    return 0;
}