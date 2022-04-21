// Limak and Bob weigh a and b respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight. Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year.

// After how many full years will Limak become strictly larger (strictly heavier) than Bob?

// Input
// The only line of the input contains two integers a and b (1 ≤ a ≤ b ≤ 10) — the weight of Limak and the weight of Bob respectively.
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int year = 0;
    do
    {
        a = a * 3;
        b = b * 2;
        year++;
    } while (a <= b);

    cout<<year;

    return 0;
}