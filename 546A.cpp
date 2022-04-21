// A soldier wants to buy w bananas in the shop. He has to pay k dollars for the first banana, 2k dollars for the second one and so on (in other words, he has to pay i·k dollars for the i-th banana).
// He has n dollars. How many dollars does he have to borrow from his friend soldier to buy w bananas?
#include <iostream>
using namespace std;

int main()
{
    int k, n, w, totalCost = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        totalCost += i * k;
    }

    if (totalCost <= n)
    {
        cout << 0;
    }
    else
    {
        cout << totalCost - n;
    }

    return 0;
}