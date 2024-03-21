//Napisz program, który:
//a.Pobiera trzy znaki
//b.W kolejnych wierszach wypisuje wszystkie możliwe permutacje tych znaków.Przykładowo
//dla znaków ‘K’, ‘O’ i ‘T’ program wypisuje(w dowolnej kolejności) : „KOT”, „KTO”, „OKT”,
//„OTK”, „TOK” i „TKO”.

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string znaki;
    cout << "Podaj trzy znaki (bez spacji): ";
    cin >> znaki;

    sort(znaki.begin(), znaki.end());
    do {
        cout << znaki << "\n";
    } while (next_permutation(znaki.begin(), znaki.end()));

    return 0;
}
