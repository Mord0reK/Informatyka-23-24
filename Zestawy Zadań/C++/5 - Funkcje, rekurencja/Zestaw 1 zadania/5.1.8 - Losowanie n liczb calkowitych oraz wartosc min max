#include <iostream>
#include <algorithm>

using namespace std;

int tab[10];
int min_val = 0, max_val = 0;

void czytaj_dane()
{
	srand(time(nullptr));
	for (int i = 0; i < 10; i++)
	{
		tab[i] = rand() % 99;
	}
}

void przetworz_dane()
{
	min_val = tab[0];
	max_val = tab[0];
	for (int i = 0; i < 10; i++)
	{
		if (tab[i] < min_val)
		{
			min_val = tab[i];
		}
		if (tab[i] > max_val)
		{
			max_val = tab[i];
		}
	}
}

void wyswietl_wynik()
{
	cout << "Minimalna wartosc z wylosowanego zbioru 10 liczb: " << min_val << endl;
	cout << "Maksymalna wartosc z wylosowanego zbioru 10 liczb: " << max_val << endl;
}

int main()
{
	czytaj_dane();
	przetworz_dane();
	wyswietl_wynik();
	return 0;
}
