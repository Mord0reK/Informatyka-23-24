//Napisz program, który:
//a.pobiera od u¿ytkownika dwa wyrazy : imiê i nazwisko
//b.wypisuje inicja³y, czyli pierwsze znaki imienia i nazwiska(oddzielone spacj¹)
//c.w kolejnym wierszu wypisuje, ile znaków ma imiê
//d.w kolejnym wierszu wypisuje ostatni¹ literê nazwiska.Za³o¿enie : imiê i nazwisko nie s¹
//tekstami pustymi.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string imie, nazwisko;
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    cout << "Inicjaly: " << imie[0] << " " << nazwisko[0] << endl;
    cout << "Liczba znakow w imieniu: " << imie.length() << endl;
    cout << "Ostatnia litera nazwiska: " << nazwisko[nazwisko.length() - 1] << endl;
    return 0;
}
