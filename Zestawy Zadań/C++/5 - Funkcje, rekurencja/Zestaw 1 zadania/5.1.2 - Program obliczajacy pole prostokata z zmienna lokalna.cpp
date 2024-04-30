#include <iostream>
#include <iomanip>

using namespace std;

float pole_prostokata()
{
	float a, b;
	cin >> a >> b;
	return a * b;
}

int main()
{
	float wynik;
	wynik = pole_prostokata();
	cout << fixed << setprecision(2) << wynik << endl;
	return 0;
}
