#include <iostream>
#include <cmath>
using namespace std;

typedef unsigned long long ulong;

int main()
{
	ulong g, i, p;
	bool t = true;
	cin >> p;
	if (p > 2)
	{
		if (p % 2 == 0)
		{
			cout << "Nie" << endl;
			return 0;
		}
		else
		{
			g = (ulong)sqrt(p);
			for (i = 3; i <= g; i += 2)
				if (p % i == 0)
				{
					cout << "Nie" << endl;
					return 0;
				}
		}
	}
	cout << "tak" << endl;
	return 0;
}
