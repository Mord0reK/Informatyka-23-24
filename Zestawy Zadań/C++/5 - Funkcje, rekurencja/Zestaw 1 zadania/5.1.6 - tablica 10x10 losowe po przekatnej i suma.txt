#include <iostream>
#include <algorithm>

using namespace std;

int tab[10][10];
int sum;

void czytaj_dane()
{
	srand(time(nullptr));
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i == j)
			{
				tab[i][j] = rand() % 10;
			}
			else
			{
				tab[i][j] = 0;
			}
		}
	}
}


void przetworz_dane()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i == j)
			{
				sum = sum + tab[i][j];
			}
		}
	}
}

void wyswietl_wynik()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << tab[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Suma: " << sum << endl;
}

int main()
{
	czytaj_dane();
	przetworz_dane();
	wyswietl_wynik();
	return 0;
}
