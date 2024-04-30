//Napisz program, który:
//a. pobiera od użytkownika liczbę całkowitą L (założenie: 0<L<40)
//b. wypisuje kolejno L wierszy, przy czym w pierwszym wierszu tekst składający się z jednej
//gwiazdki, w drugim – z dwóch gwiazdek, w trzecim – z trzech, itd.
#include <iostream>

using namespace std;

int main()
{
    int L, i, j;
    cin >> L;
    for (i = 1; i <= L; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}

