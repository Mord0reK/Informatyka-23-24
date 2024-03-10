//Napisz program, który za pomocą instrukcji for dla danych wartości x zmieniających się od 0 do 10 oblicza 
//wartość funkcji y = 3x.

#include <iostream>

using namespace std;

int main()
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		cout << 3 * i << endl;
	}
	return 0;
}
