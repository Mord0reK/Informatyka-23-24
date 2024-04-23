#define _USE_MATH_DEFINES
#include <iostream>

using namespace std;

int main()
{
	char a, b, c;
	cin >> a >> b >> c;
	while (a == 'A' && b == 'A' && c == 'A')
	{
		cout << "zle" << endl;
		cin >> a >> b >> c;
	}
	if (a == 'B' || b == 'B' || c == 'B')
	{
		cout << "dobrze" << endl;
	}
	else
	{
		cout << "Srednio " << endl;
	}
}

