//Napisz program, który za pomoc¹ instrukcji for dla danych wartoœci x zmieniaj¹cych siê od 0 do 10 oblicza 
//wartoœæ funkcji y = 3x.

#include <iostream>

using namespace std;

int main()
{
	int x, i;
	for (i = 0; i <= 10; i++)
	{
		cout << 3 * i << endl;
	}
	return 0;
}