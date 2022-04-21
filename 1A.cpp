// A rectangular shape with the size n × m meters. On the occasion of the city's anniversary,Cover it with flagstone of the size a × a. It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.How much flagstone needed?
// Input n,  m and a (1 ≤  n, m, a ≤ 109).
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	long double n, m, a, tmp;
	cin >> n >> m >> a;
	cout.precision(22);
	if (m < n)
	{
		tmp = m;
		m = n;
		n = tmp;
	}

	if (a >= m)
	{
		cout << ceil(n / a);
	}
	else if (a >= n)
	{
		cout << ceil(m / a);
	}
	else
	{
		cout << ceil(m / a) * ceil(n / a);
	}
	return 0;
}
