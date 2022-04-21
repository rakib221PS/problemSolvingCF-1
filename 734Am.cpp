// Once they have played n games in a row. For each game it's known who was the winner — Anton or Danik. None of the games ended with a tie.

// Now Anton wonders, who won more games, he or Danik? Help him determine this.

// Input
// The first line of the input contains a single integer n (1 ≤ n ≤ 100 000) — the number of games played.

// The second line contains a string s, consisting of n uppercase English letters 'A' and 'D' — the outcome of each of the games. The i-th character of the string is equal to 'A' if the Anton won the i-th game and 'D' if Danik won the i-th game.

// Output
// If Anton won more games than Danik, print "Anton" (without quotes) in the only line of the output.

// If Danik won more games than Anton, print "Danik" (without quotes) in the only line of the output.

// If Anton and Danik won the same number of games, print "Friendship" (without quotes).

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    // getline(std::cin,n);
    cin>>n;
    int anton = 0, danik = 0;
    string str;
    // getline(cin, str);
    cin>>str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }

    if (anton > danik)
    {
        cout << "Anton";
    }
    else if (danik == anton)
    {
        cout << "Friendship";
    }
    else
    {
        cout << "Danik";
    }
    return 0;
}