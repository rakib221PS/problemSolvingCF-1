// Vasya typed the word s. If Vasya types the word "ahhellllloou", it will be considered that he said hello, and if he types "hlelo", it will be considered that Vasya got misunderstood and he didn't manage to say hello.

// Input
// This word consisits of small Latin letters, its length is no less that 1 and no more than 100 letters.

// Output
// If Vasya managed to say hello, print "YES", otherwise print "NO".
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string hello = "hello";
    string line;
    cin >> line;
    int total = 0, j = 0;
    for (int i = 0; i < line.size(); i++)
    {
        if (line[i] == hello[j])
        {
            j++;
            total++;
            if (total == 5)
            {
                break;
            }
        }
    }

    if (total == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}