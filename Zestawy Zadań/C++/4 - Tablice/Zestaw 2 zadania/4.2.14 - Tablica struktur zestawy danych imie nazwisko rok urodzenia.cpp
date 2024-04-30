#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct osoba
{
    string imie;
    string nazwisko;
    int rokurodzenia;
};


int main()
{
    int n;
    cout << "Podaj ilosc zestawow danych. Zakres (0 < n < 20): ";
    cin >> n;
    while (n < 0 || n > 20)
    {
        cout << "Podaj ilosc zestawow danych. Zakres (0 < n < 20): ";
        cin >> n;
    }
    vector<osoba> tab(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Podaj imie: ";
        cin >> tab[i].imie;
        cout << "Podaj nazwisko: ";
        cin >> tab[i].nazwisko;
        cout << "Podaj rok urodzenia: ";
        cin >> tab[i].rokurodzenia;
    }
    cout << endl;
    cout << "Rok urodzenia: " << "\t" << "Imie: " << "\t" << "Nazwisko: " << endl;
    cout << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << tab[i].rokurodzenia << " " << tab[i].imie << " " << tab[i].nazwisko << endl;
    }
    return 0;
}
