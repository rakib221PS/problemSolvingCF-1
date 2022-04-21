// if the last digit of the number is non-zero, she decreases the number by one;
// if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).
#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int number = n;
    int lastDigit;
    for (int i = 0; i < k; i++)
    {
        lastDigit = number % 10;
        if (lastDigit == 0)
        {
            number = number / 10;
        }
        else
        {
            number = number - 1;
        }
    }

    cout<<number << endl;
    return 0;
}