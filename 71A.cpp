
// Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.

// This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.

// Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".

// You are suggested to automatize the process of changing the words with abbreviations. At that all too long words should be replaced by the abbreviation and the words that are not too long should not undergo any changes.

// Input
// The first line contains an integer n (1 ≤ n ≤ 100). Each of the following n lines contains one word. All the words consist of lowercase Latin letters and possess the lengths of from 1 to 100 characters.
#include <iostream>
#include <string>
using namespace std;
bool isGreaterThanOne(int n);
void inputLinesOfWords(string *arrayOfString, int n);
void replaceWordWithSpecialAbbreviation(string *arrayOfString, int n);
void outPutAbbreviatedArrayElement(string *arrayOfString, int n);
int main()
{
    int n;
    // cout << "How many number do you want to create: ";
    cin >> n;
    if (isGreaterThanOne(n) == true)
    {
        string *arrayOfString = new string[n];
        inputLinesOfWords(arrayOfString, n);
        replaceWordWithSpecialAbbreviation(arrayOfString, n);
        outPutAbbreviatedArrayElement(arrayOfString, n);
    }
    else
    {
        cout << "Please enter appropiate number" << endl;
    }
    return 0;
}

bool isGreaterThanOne(int n)
{
    if (n >= 1 && n <= 100)
        return true;
    return false;
}

void inputLinesOfWords(string *arrayOfString, int n)
{
    for (int i = 0; i < n; i++)
    {
        string arrayElement;
        // cout << "Enter only one word for line number " << i + 1 << ": ";
        cin >> arrayElement;
        // getline(cin, arrayElement);
        // string newArrayElement;
        // for (int j = 0; arrayElement[j] != ' '; j++)
        // {
        //     newArrayElement += arrayElement[j];
        // }
        // cout << newArrayElement << endl;
        // arrayOfString[i] = newArrayElement;
        // cout << arrayOfString[i] << endl;
        int shift = 'a' - 'A';
        for (int i = 0; arrayElement[i] != '\0'; ++i)
        {
            if (arrayElement[i] >= 'A' && arrayElement[i] <= 'Z')
                arrayElement[i] = arrayElement[i] + shift;
        }
        arrayOfString[i] = arrayElement;
    }
}

void replaceWordWithSpecialAbbreviation(string *arrayOfString, int n)
{
    int len;
    for (int i = 0; i < n; i++)
    {
        len = arrayOfString[i].size();
        if (len > 10)
        {
            char firstValue = arrayOfString[i][0];
            int lastIndex = len - 1;
            char lastValue = arrayOfString[i][lastIndex];
            int abbreviation = len - 2;
            string stringAbbreviation = to_string(abbreviation);
            string newArrayElementForIndex = firstValue + stringAbbreviation + lastValue;
            arrayOfString[i] = newArrayElementForIndex;
        }
    }
}

void outPutAbbreviatedArrayElement(string *arrayOfString, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arrayOfString[i] << endl;
    }
}
