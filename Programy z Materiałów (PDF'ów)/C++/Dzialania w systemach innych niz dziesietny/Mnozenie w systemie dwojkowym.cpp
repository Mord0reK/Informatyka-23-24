#include <iostream>
#include <string>
using namespace std;

string Dodaj(string a, string b)
{
    int i, przn = 0, suma;
    string c="";
    while (a.size() < b.size()) a = '0' + a;
    while (b.size() < a.size()) b = '0' + b;
    for (i = a.size() - 1; i>=0; i--)
    {
        suma = przn + a[i] - '0' + b[i] - '0';
        if (suma % 2 == 1) c = '1' + c;
        else c = '0' + c;
        przn = suma / 2;
    }
    if (przn == 1) c = '1' + c;
    return c;
}

int main()
{
    string a, b, c = "0";
    int i,j;
    cin >> a >> b;
    for (i = b.size() - 1; i >= 0; i--)
    {
        if (b[i] == '1') c = Dodaj(c, a);
        a = a + '0';
    }
    cout << "Wynik: " << c << endl;
    return 0;
}