// capitalize every word of a line
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    getline(std::cin, word);
    int shift = 'a' - 'A';
    if (word[0]>='a' && word[0]<='z')
    {
        word[0] = word[0] - shift;
    }
    
    for (int i = 1; i < word.size(); i++)
    {
        if (word[i] == ' ' && (word[i+1] >='a' && word[i+1] <= 'z'))
        {
            word[i + 1] = word[i + 1] - shift;
        }
    }

    cout << word;
    return 0;
}