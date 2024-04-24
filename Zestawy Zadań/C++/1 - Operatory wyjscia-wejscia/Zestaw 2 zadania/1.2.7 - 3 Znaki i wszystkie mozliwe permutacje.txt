//Napisz program, który:
//a.Pobiera trzy znaki
//b.W kolejnych wierszach wypisuje wszystkie możliwe permutacje tych znaków.Przykładowo
//dla znaków ‘K’, ‘O’ i ‘T’ program wypisuje(w dowolnej kolejności) : „KOT”, „KTO”, „OKT”,
//„OTK”, „TOK” i „TKO”.

#include <iostream>

using namespace std;

int main()
{
    string znaki;
    cout << "Podaj trzy znaki (bez spacji): ";
    cin >> znaki;
    cout << znaki[0] << znaki[1] << znaki[2] << endl;
    cout << znaki[0] << znaki[2] << znaki[1] << endl;
    cout << znaki[1] << znaki[0] << znaki[2] << endl;
    cout << znaki[1] << znaki[2] << znaki[0] << endl;
    cout << znaki[2] << znaki[1] << znaki[0] << endl;
    cout << znaki[2] << znaki[0] << znaki[1] << endl;
    return 0;
}