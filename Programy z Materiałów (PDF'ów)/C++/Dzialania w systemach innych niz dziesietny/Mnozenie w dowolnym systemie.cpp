#include <iostream>
#include <string>

using namespace std;

string Mnozprzezcfr(int cfr, string liczba, int podstawa)
{
    int i, przn = 0, iloczyn;
    string wynik = "";
    for (i = liczba.size() - 1; i>=0; i--)
    {
        iloczyn = cfr * (liczba[i] - '0') + przn;
        wynik = char(iloczyn % podstawa + '0') + wynik;
        przn = iloczyn / podstawa;
    }
    if (przn == 1) wynik = char(przn + '0') + wynik;
    return wynik;
}

string Dodaj(string a, string b, int podstawa)
{
    int i, przn = 0, suma;
    string c="";
    while (a.size() < b.size()) a = '0' + a;
    while (b.size() < a.size()) b = '0' + b;
    for (i = a.size() - 1; i>=0; i--)
    {
        suma = przn + a[i] - '0' + b[i] - '0';
        c = char(suma % podstawa + '0') + c;
        przn = suma / podstawa;
    }
    if (przn == 1) c = '1' + c;
    return c;
}

int main()
{
    int i,j,d, podstawa;
    string a,b,c="", pom;
    cout << "Podaj podstawe: ";
    cin >> podstawa;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;
    d = b.size() - 1;
    for (i = d; i>=0;i--)
    {
        pom = Mnozprzezcfr(b[i] - '0', a, podstawa);
        for (j=1; j<=d - i; j++)
        {
            pom += "0";
        }
        c = Dodaj(c, pom, podstawa);
    }
    cout << "Wynik: " << c << endl;
    return 0;
}