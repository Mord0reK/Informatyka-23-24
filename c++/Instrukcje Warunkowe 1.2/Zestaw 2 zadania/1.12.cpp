//Napisz program, który:
//a. pobiera od użytkownika trzy liczby rzeczywiste
//b. wypisuje je w kolejności od największej do najmniejszej.

#include <iostream>

using namespace std;

int main()
{
	float a, b, c, min, max;
	cin >> a >> b >> c;
	max = a;
	if (b > max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}
	min = a;
	if (b < min)
	{
		min = b;
	}
	if (c < min)
	{
		min = c;
	}

	cout << max <<endl <<  (a + b + c - max - min) <<endl << min << endl;
}

