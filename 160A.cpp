// n coins of arbitrary values a1, a2, ..., an. But as Mom was running out of time, she didn't split the coins for you two. So she scribbled a note asking you to split the money equally.

// pick for yourself some subset of coins so that the sum of values of your coins is strictly larger than the sum of values of the remaining coins that your twin will have. However, you correctly thought that if you take too many coins, the twin will suspect the deception. So, you've decided to stick to the following strategy to avoid suspicions: you take the minimum number of coins, whose sum of values is strictly more than the sum of values of the remaining coins. On this basis, determine what minimum number of coins you need to take to divide them in the described manner.

// Input
// The first line contains integer n (1 ≤ n ≤ 100) — the number of coins. The second line contains a sequence of n integers a1, a2, ..., an (1 ≤ ai ≤ 100) — the coins' values. All numbers are separated with spaces.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, totalNumberOfCoin = 0, sumN = 0, sum = 0, avg = 0;
    cin >> n;
    int coins[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    int s = sizeof(coins) / sizeof(coins[0]);
    sort(coins, coins + s);
    for (int i = 0; i < n; i++)
    {
        sum += coins[i];
    }
    avg = sum / 2;
    int j = n;
    while (sumN <= avg)
    {
        sumN += coins[j - 1];
        totalNumberOfCoin++;
        j--;
    }
    cout << totalNumberOfCoin << endl;
    return 0;
}