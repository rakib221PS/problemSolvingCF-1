// The lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

// Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. He wonders whether number n is a nearly lucky number.

// Input
// The only line contains an integer n (1 ≤ n ≤ 1018).

// Please do not use the %lld specificator to read or write 64-bit numbers in С++. It is preferred to use the cin, cout streams or the %I64d specificator.

// Output
// Print on the single line "YES" if n is a nearly lucky number. Otherwise, print "NO" (without the quotes).
#include <iostream>
using namespace std;

int main()
{
    long long number;
    cin >> number;
    int totalLuckyNumber = 0;
    while (number > 0)
    {
        if (number % 10 == 4 || number % 10 == 7)
        {
            totalLuckyNumber++;
            number /= 10;
        }
        else
        {
            number /= 10;
        }
    }
    // cout<<totalLuckyNumber<<endl;

    int len = to_string(totalLuckyNumber).length();
    // cout<<len;
    int luckyLength = 0;
    while (totalLuckyNumber > 0)
    {
        if (totalLuckyNumber % 10 == 4 || totalLuckyNumber % 10 == 7)
        {
            luckyLength++;
            totalLuckyNumber /= 10;
        }
        else
        {
            totalLuckyNumber /= 10;
        }
    }

    if (len == luckyLength)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}