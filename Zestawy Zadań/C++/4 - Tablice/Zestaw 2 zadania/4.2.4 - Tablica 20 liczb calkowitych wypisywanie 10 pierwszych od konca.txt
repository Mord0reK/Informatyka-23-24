#include <iostream>

using namespace std;

int main()
{
    int tab[20];
    for (int i = 0; i < 20; i++)
    {
        cin >> tab[i];
    }
    cout << endl;
    for (int i = 9; i >= 0; i--)
    {
        cout << tab[i] << endl;
    }
}
