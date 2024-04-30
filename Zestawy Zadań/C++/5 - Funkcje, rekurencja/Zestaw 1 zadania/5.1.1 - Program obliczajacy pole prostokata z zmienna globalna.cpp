#include <iostream>
#include <iomanip>

using namespace std;

float a, b;

float pole_prostokata()
{
	return a * b;
}

int main()
{
	cout << "Podaj dlugosci" << endl;
	cin >> a >> b;
	float pole = pole_prostokata();
	cout << fixed << setprecision(2) << pole << endl;
	return 0;
}
