#include <iostream>
#include <iomanip>

using namespace std;

float a, b, pole;

void czytaj_dane()
{
	cin >> a >> b;
}

float przetworz_dane()
{
	pole = a * b;
	return pole;
}

void wyswietl_wynik()
{
	cout << fixed << setprecision(2) << pole << endl;
}

int main()
{
	czytaj_dane();
	przetworz_dane();
	wyswietl_wynik();
	return 0;
}
