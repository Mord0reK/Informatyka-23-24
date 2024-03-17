// Napisz program, który:
//a.Pobiera od użytkownika dwie liczby rzeczywiste
//b.Program dodaje liczby i zapamiętuje ich sumę w zmiennej SUM
//c.Jeśli wartość SUM jest większa od 100, to program się kończy
//d.Program pobiera kolejną liczbę, dodaje ją do SUM i ponownie sprawdza, czy nie jest większa
//od 100 (skok do punktu d).
//Zastosuj pętlę while.

#include <iostream>

using namespace std;

int main()
{
    float a, sum = 0;
    cin >> a;
    sum += a;
    cin >> a;
    sum += a;
    while (sum <= 100)
    {
        cin >> a;
        sum += a;
    }
    return 0;
}

