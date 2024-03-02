//Napisz program, który:
//a. wypisuje komunikat „Podaj kod : „
//b. w tym samym wierszu pobiera wyraz
//c. jeśli podany wyraz to „qwerty”, to program kończy się
//d. jeśli użytkownik podawał do tej pory kod mniej niż trzy razy, to może ponownie podać kod
//(skok do punktu b).

#include <iostream>

using namespace std;

int main()
{
    int licznik = 0;
    string kod;
    cout << "Podaj Kod: ";
    cin >> kod;
    while (licznik < 2)
    {
        if (kod == "qwerty")
        {
            return 0;
        }
        licznik += 1;
        cout << "Podaj Kod: ";
        cin >> kod;
    }
}

