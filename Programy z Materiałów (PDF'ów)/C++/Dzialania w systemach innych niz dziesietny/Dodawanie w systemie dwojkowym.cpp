#include <string>
#include <iostream>

using namespace std;

int main()
{
    int i, przn = 0, suma;
    string a,b,c="";
    cout << "Liczba 1: " << " ";
    cin >> a;
    cout << "Liczba 2: " << " ";
    cin >> b;
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
    cout << "Suma: " << c << endl;
    return 0;
}