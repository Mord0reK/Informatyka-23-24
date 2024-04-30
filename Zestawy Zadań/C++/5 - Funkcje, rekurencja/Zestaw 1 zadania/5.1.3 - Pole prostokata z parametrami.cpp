#include <iostream>
#include <iomanip>

using namespace std;

float a, b, pole;

float pole_prostokata(float a, float b)
{
	return a * b;
}

int main()
{
	cin >> a >> b;
	cout << fixed << setprecision(2) << pole_prostokata(a, b) << endl;
	return 0;
}
