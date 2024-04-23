//Napisz program, który:
// a.Pobiera od użytkownika dwie liczby całkowite
// b.Jeśli liczby są sobie równe, to program ponownie pobiera liczby(skok do punktu a)
// c.Program wypisuje sumę pobranych liczb.
// Zastosuj pętlę while.
#include <iostream>

using namespace std;

int main()
{
    int a, b, sum;
    cin >> a >> b;
    sum = a + b;
    while (a == b)
    {
        sum = 0;
        cin >> a >> b;
        sum = a + b;
    }
    cout << sum << endl;
    return 0;
}

