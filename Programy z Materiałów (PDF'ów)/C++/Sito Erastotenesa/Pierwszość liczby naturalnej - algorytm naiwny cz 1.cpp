#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int g, i, p;
	cin >> p;
	g = (unsigned long long)sqrt(p);
	for (i = 2; i <= g; i++)
	{
		if (p % i == 0)
		{
			cout << "Nie" << endl;
			return 0;
		}
	}
	cout << "Tak" << endl;
	cout << endl;
	return 0;
}
