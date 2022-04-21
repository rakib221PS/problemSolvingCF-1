// A watermelon is weighed, and the scales showed w kilos. Divide the watermelon in such a way that each of the two parts weighs even number of kilos, at the same time it is not obligatory that the parts are equal. For sure, each of them should get a part of positive weight.

// Input
// The first (and the only) input line contains integer number w (1 ≤ w ≤ 100) — the weight of the watermelon bought by the boys.

// Output
// Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.
#include <iostream>
using namespace std;
void evenDivisible(int weight);
int main()
{
    int watermelonWeight;
    std::cin >> watermelonWeight;
    if (watermelonWeight >= 1 && watermelonWeight <= 100)
        evenDivisible(watermelonWeight);
    else
        std::cout << "Please enter number in this range 1<=n>=100" << std::endl;
}

void evenDivisible(int weight)
{
    if (weight > 2 && weight % 2 == 0)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;
}