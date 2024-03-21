//Napisz program, który:
//a.pobiera liczbę całkowitą L
//b. wypisuje nazwę miesiąca odpowiadającego danej liczbie (dla 1- styczeń, dla 2 – luty, itd.).
//Program działa w ten sposób dla pierwszy pięciu miesięcy – jeśli liczba nie jest z przedziału od 1
//do 5, to program nie wypisuje nic.

#include <iostream>

using namespace std;

int main()
{
	int L;
	cin >> L;
	switch (L)
	{
	case 1:
	{
		cout << "Styczen" << endl;
		break;
	}
	case 2:
	{
		cout << "Luty" << endl;
		break;
	}
	case 3:
	{
		cout << "Marzec" << endl;
		break;
	}
	case 4:
	{
		cout << "Kwiecien" << endl;
		break;
	}
	case 5:
	{
		cout << "Maj" << endl;
		break;
	}
	default:
	{
		cout << endl;
		break;
	}
	}
}

