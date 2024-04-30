#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

float a, b, c, x1, x2, delta;
int brak;

void czytaj_dane()
{
	cout << "Podaj wspolczynnik a: ";
	cin >> a;
	cout << "Podaj wspolczynnik b: ";
	cin >> b;
	cout << "Podaj wspolczynnik c: ";
	cin	>> c;
}

void przetworz_dane()
{
	delta = b * b - 4 * a * c;
	switch (int(signbit(delta)))
	{
	case 0:
	{
		x1 = -b - sqrt(delta) / 2 * a;
		x2 = -b + sqrt(delta) / 2 * a;
		break;
	}
	case 1:
	{
		brak = 1;
		break;
	}
	default:
		x1 = -b / 2 * a;
		break;
	}
}

void wyswietl_wynik()
{
	if (brak == 1)
	{
		cout << "Nie ma pierwiastkow rownania (Delta < 0)" << endl;
	}
	else
	{
		cout << "Pierwszy pierwiastek: " << fixed << setprecision(2) << x1 << endl;
		cout << "Drugi pierwiastek: " << fixed << setprecision(2) << x2 << endl;
	}
}

int main()
{
	czytaj_dane();
	przetworz_dane();
	wyswietl_wynik();
	return 0;
}
