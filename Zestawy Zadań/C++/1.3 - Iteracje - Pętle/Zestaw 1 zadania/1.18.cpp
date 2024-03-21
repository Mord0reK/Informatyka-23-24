//Napisz program, który za pomoc¹ instrukcji while znajduje najwiêksz¹ i najmniejsz¹ liczbê ze
//zbioru n liczb losowych z przedzia³u od 0 do 99 oraz oblicza ich œredni¹(w zadaniu n = 5).).

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int n = 5;
    int liczby[n];
    int sum = 0;
    int min, max;
    int i = 0;

    srand(time(NULL));

    while (i <= n)
    {
        liczby[i] = rand() % 100;
        cout << liczby[i] << " ";
        sum += liczby[i];

        if (i == 0) {
            min = max = liczby[i];
        }
        else {
            if (liczby[i] < min) {
                min = liczby[i];
            }
            if (liczby[i] > max) {
                max = liczby[i];
            }
        }
        i++;
    }
    double srednia = sum / n;

    // Wyœwietlanie wyników
    cout << "\nNajmniejsza liczba: " << min << endl;
    cout << "Najwieksza liczba: " << max << endl;
    cout << "Srednia: " << srednia << endl;

    return 0;
}