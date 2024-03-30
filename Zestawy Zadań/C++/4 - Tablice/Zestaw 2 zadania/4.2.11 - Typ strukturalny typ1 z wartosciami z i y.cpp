#include <iostream>

using namespace std;

struct typ1
{
    int liczba;
    char znak;
};

int main()
{
    typ1 Z, Y;
    cout << "Podaj liczbe calkowita do Z: ";
    cin >> Z.liczba;
    cout << "Podaj znak do Z: ";
    cin >> Z.znak;
    cout << "Podaj liczbe calkowita do Y: ";
    cin >> Y.liczba;
    cout << "Podaj znak do Y: ";
    cin >> Y.znak;
    if (Z.liczba == Y.liczba && Z.znak == Y.znak)
    {
        cout << "Zgoda " << endl;
    }
    return 0;
}
