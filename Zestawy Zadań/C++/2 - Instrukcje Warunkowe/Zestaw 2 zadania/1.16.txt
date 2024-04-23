//Napisz program, który:
//a. pobiera tekst (całą linijkę )
//b. usuwa z tekstu wszystkie spacje i kropki
//c. wypisuje zmieniony tekst 10 razy w kolejnych wierszach.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string tekst;
    cout << "Podaj tekst: ";
    getline(cin, tekst);

    // Usuwanie spacji i kropek
    for (int i = 0; i < tekst.length(); i++) {
        if (tekst[i] == ' ' || tekst[i] == '.') {
            tekst.erase(i, 1);
            i--; // Cofnięcie indeksu o 1, aby nie pominąć znaku po usuniętym
        }
    }

    // Wypisywanie zmienionego tekstu 10 razy
    for (int i = 0; i < 10; i++) {
        cout << tekst << endl;
    }

    return 0;
}
