// There are n stones on the table in a row, each of them can be red, green or blue. Count the minimum number of stones to take from the table so that any two neighboring stones had different colors. Stones in a row are considered neighboring if there are no other stones between them.

// Input
// The first line contains integer n (1 ≤ n ≤ 50) — the number of stones on the table.

// The next line contains string s, which represents the colors of the stones. We'll consider the stones in the row numbered from 1 to n from left to right. Then the i-th character s equals "R", if the i-th stone is red, "G", if it's green and "B", if it's blue.

#include <iostream>
using namespace std;

int main()
{
    int n, stones = 0;
    cin >> n;
    int size = n + 1;
    char color[size];
    // string color;
    // getline(cin, color);
    cin>>color;
    // RRRR
    // char color[5] = "RRRR";
    for (int i = 0; i < n; i++)
    {
        if (i != 0 &&  color[i] == color[i - 1])
        {
            stones++;
        }
        else
        {
            continue;
        }
    }
    cout<<stones;
    return 0;
}