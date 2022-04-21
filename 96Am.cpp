// The first input line contains a non-empty string consisting of characters "0" and "1", which represents players. The length of the string does not exceed 100 characters. There's at least one player from each team present on the field.
// if 7 player from diffrent same team in line then it mean dangerours else not dangerous
#include <iostream>
using namespace std;

int main()
{
    string plyersPositions;
    getline(std::cin, plyersPositions);

    if (plyersPositions.find("0000000"))
    {
        cout << "YES";
    }
    else if (plyersPositions.find("1111111")){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}