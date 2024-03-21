// Napisz program, który:
// a.Pobiera od użytkownika wyraz
// b.Jeśli pobrany wyraz jest różny od „Jan” oraz od „Janek”, to program ponownie pobiera
// wyraz(skok do punktu a)
// c.Program wypisuje „Cześć” i w tym samym wierszu podany wyraz.
// Zastosuj pętlę do – while.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    do
    {
        cin >> a;
    } while (a != "Jan" && a != "Janek");
    cout << "Czesc" << a << endl;
    return 0;
}

