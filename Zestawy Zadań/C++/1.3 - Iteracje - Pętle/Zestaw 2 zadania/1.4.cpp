// Napisz program., który:
// a.Pobiera od użytkownika tekst(całą linijkę)
// b.Usuwa z tekstu wszystkie spacje
// c.Wypisuje zmieniony tekst
// Zastosuj pętlę while

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string tekst, tekstmodified;
    int i = 0;
    getline(cin, tekst);
    while (i < tekst.length())
    {
        if (tekst[i] != " ")
        {
            tekstmodified += tekst[i];
        }
        i++;
    }
    cout << tekstmodified << endl;
    return 0;
}

