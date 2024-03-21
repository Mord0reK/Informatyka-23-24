#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	float a, b, c, d, x1, x2;
	cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	switch (int(signbit(d)))
	{
		case 0:
		{
			if (d > 0)
			{
				cout << "Dwa rozwiazania" << endl;
				x1 = (-b - sqrt(d)) / 2;
				x2 = (-b + sqrt(d)) / 2;
				cout << fixed << setprecision(2) << x1 << endl << x2 << endl;
				break;
			}
			else
			{
				cout << "Jedno rozwiazanie" << endl;
				x1 = -b / 2 * a;
				cout << fixed << setprecision(2) << x1 << endl;
				break;
			}
		}
		case 1:
		{
			cout << "N" << endl;
			break;
		}
	}
}

