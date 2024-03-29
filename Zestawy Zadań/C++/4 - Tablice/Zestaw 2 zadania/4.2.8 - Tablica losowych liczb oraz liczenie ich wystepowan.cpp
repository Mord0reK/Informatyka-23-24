#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int N = 1000;
    const int MAX_VALUE = 10;

    int TAB[N];
    int LICZNIK[MAX_VALUE + 1] = { 0 }; // Indeksy od 0 do 10, więc tablica ma MAX_VALUE + 1 elementów

    // Inicjowanie generatora liczb pseudolosowych
    srand(time(nullptr));

    // Wypełnianie tablicy TAB losowymi liczbami całkowitymi z przedziału [0, 10]
    for (int i = 0; i < N; ++i) {
        TAB[i] = rand() % (MAX_VALUE + 1);
    }

    // Obliczanie wystąpień poszczególnych wartości od 0 do 10
    for (int i = 0; i < N; ++i) {
        LICZNIK[TAB[i]]++;
    }

    // Wyświetlanie wyników
    for (int i = 0; i <= MAX_VALUE; ++i) {
        cout << "Wartosc " << i << " wystapila " << LICZNIK[i] << " razy." << endl;
    }

    return 0;
}
