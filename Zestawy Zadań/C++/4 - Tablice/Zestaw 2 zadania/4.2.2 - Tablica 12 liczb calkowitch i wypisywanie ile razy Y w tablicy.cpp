#include <iostream>

using namespace std;

int main()
{
    int tab[12];
    int Y = 0;
    int licznik = 0;
    for (int i = 0; i < 12; i++)
    {
        cin >> tab[i];
    }
    cout << "Podaj Y: " << endl;
    cin >> Y;
    for (int i = 0; i < 12; i++)
    {
        if (Y == tab[i])
        {
            licznik++;
        }
    }
    cout << "Liczba " << Y << " znajduje sie "<< licznik << " razy w tablicy." << endl;
    return 0;
}
