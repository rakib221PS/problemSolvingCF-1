// The first input line contains a non-empty string consisting of characters "0" and "1", which represents players. The length of the string does not exceed 100 characters. There's at least one player from each team present on the field.
// if 7 player from diffrent same team in line then it mean dangerours else not dangerous
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string plyersPositions;
    getline(std::cin, plyersPositions);
    int inLine = 0;
    int limit = 7;
    // cout<<plyersPositions;
    // 010101111111100
    // 10100101
    if (plyersPositions.size() >= 7)
    {
        for (int i = 0; i < plyersPositions.size(); i++)
        {
            for (int j = i + 1; j < limit; j++)
            {
                if (plyersPositions[i] == plyersPositions[j])
                {
                    inLine++;
                }
            }
            if (inLine >= 6)
            {
                cout << "YES";
                break;
            }
            else if (i == plyersPositions.size() - 6)
            {
                cout << "NO";
                break;
            }
            else
            {
                inLine = 0;
                limit += 1;
            }
        }
    }
    else
    {
        cout << "NO";
    }
    return 0;
}