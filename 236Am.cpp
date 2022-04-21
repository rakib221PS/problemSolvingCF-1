// capitalize every word of a line
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word = "mmmmmdddfff";
    // getline(std::cin, word);
    string newWord;
    // int j = 0;
    for (int i = 0; i < word.size(); i++)
    {
        // if (newWord.empty()== true)
        // {
        //     newWord=newWord+word[i];
        //     // j++;
        // }
        // int check = newWord.find(word[i]);
        if (newWord.find(word[i]) == true)
        {
            continue;
        }
        else
        {
            // newWord[j] = word[i];
            newWord = newWord + word[i];
            // j++;
        }
    }

    cout << newWord;
    return 0;
}