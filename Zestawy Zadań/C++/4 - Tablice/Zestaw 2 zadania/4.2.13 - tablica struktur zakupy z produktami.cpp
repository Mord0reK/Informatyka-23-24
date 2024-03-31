#include <iostream>
#include <string>

using namespace std;

struct produkt
{
    string nazwa;
    float cena;
    int lsztuk;
};


int main()
{
    produkt tab[10];
    float sumaprod = 0;
    for (int i = 0; i < 2; i++)
    {
        cout << "Podaj nazwe produktu: ";
        cin >> tab[i].nazwa;
        cout << "Podaj cene: ";
        cin >> tab[i].cena;
        cout << "Podaj liczbe sztuk: ";
        cin >> tab[i].lsztuk;
        sumaprod += tab[i].cena * tab[i].lsztuk;
    }
    cout << "Nazwa:" << "\t" << "\t" << "Cena: " << "\t" << "\t" << "Ilosc sztuk: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << tab[i].nazwa << "\t" << "\t" << tab[i].cena << "\t" << "\t" << tab[i].lsztuk << endl;
    }
    cout << "Kosz calego zakupu: " << sumaprod << endl;
    return 0;
}
