#include <iostream>

using namespace std;

int main()
{
    string tab[10];
    string a;
    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        tab[i] = a;
    }
    cout << "Osmy i pierwszy znak: " << tab[7] << " " << tab[0] << endl;
}
