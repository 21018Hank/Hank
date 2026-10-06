#include <iostream>
#include <numeric>
using namespace std;

int main()
{
	long long i, j, n, g;

	while (cin >> n && n != 0)
	{
		g = 0;
		for (i = 1;i < n;i++)
		{
			for (j = i + 1;j <= n;j++)
			{
				g += gcd(i, j);
			}
		}
		cout << g << endl;
	}

	return 0;
}
