// Napisz program, który:
// a.pobiera od użytkownika tekst(wyraz)
// b.wypisuje tekst od końca.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string tekst;
    int i;
    cin >> tekst;
    for (i = tekst.length(); i >= 0; --i)
    {
        cout << tekst[i];
    }
    return 0;
}
