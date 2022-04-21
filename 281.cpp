// Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

// Note, that during capitalization all the letters except the first one remains unchanged.

// Input
// A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.
#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    getline(std::cin, word);
    int shift = 'a'-'A';
    if (word[0]>='a' && word[0]<='z')
    {
        word[0] = word[0] - shift;
    }
    cout<<word;
    return 0;
}