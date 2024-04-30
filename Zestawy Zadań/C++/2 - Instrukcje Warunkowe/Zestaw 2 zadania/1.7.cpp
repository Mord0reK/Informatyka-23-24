#define _USE_MATH_DEFINES
#include <iostream>

using namespace std;

int main()
{
	float a, b, wynik;
	char znak;
	cin >> a >> b;
	cin >> znak;
	switch (znak)
	{
	case '+':
	{
		cout << a + b << endl;
		break;
	}
	case '-':
	{
		cout << a - b << endl;
		break;
	}
	case '*':
	{
		cout << a * b << endl;
		break;
	}
	case '/':
	{
		if (b == 0)
		{
			cout << "ER" << endl;
		}
		else
		{
			cout << a / b << endl;
		}
		break;
	}
	default:
	{
		cout << "ER" << endl;
	}
	}
}

