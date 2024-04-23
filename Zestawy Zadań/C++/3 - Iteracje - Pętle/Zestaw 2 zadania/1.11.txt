// Napisz program, który:
// a.pobiera od użytkownika kolejne liczby rzeczywiste, aż do podania zera
// b.wypisuje sumę podanych wcześniej liczb

#include <iostream>

using namespace std;

int main()
{
    int a = 1, sum = 0;
    while (a != 0)
    {
        cin >> a;
        sum += a;
    }
    cout << sum << endl;
    return 0;
}

