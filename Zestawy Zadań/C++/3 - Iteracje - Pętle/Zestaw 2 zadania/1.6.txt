// Napisz program, który:
// a.Pobiera od użytkownika tekst(całą linijkę)
// b.Zamienia w tekście wszystkie cyfry na znak ‘* ’(gwiazdka)
// c.Wypisuje zmieniony tekst
// Zastosuj pętlę for

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string tekst;
    int i;
    getline(cin, tekst);
    for (i = 0; i <= tekst.length(); i++)
    {
        if (isdigit(tekst[i]))
        {
            tekst[i] = '*';
        }
    }
    cout << tekst << endl;
    return 0;
}

