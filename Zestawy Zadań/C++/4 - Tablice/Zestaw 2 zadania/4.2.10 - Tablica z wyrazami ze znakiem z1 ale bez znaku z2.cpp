#include <iostream>
#include <string>

using namespace std;

int main()
{
    string tab[20];
    char z1, z2;
    for (int i = 0; i < 20; i++)
    {
        cout << "Podaj wyraz: ";
        cin >> tab[i];
    }
    cout << "Podaj znak Z1: ";
    cin >> z1;
    cout << "Podaj znak Z2: ";
    cin >> z2;
    for (int i = 0; i < 20; i++)
    {
        bool posiadaz1 = false;
        bool posiadaz2 = false;

        for (int j = 0; j < tab[i].length(); j++)
        {
            if (tab[i][j] == z1)
            {
                posiadaz1 = true;
            }
            if (tab[i][j] == z2)
            {
                posiadaz2 = true;
            }
        }

        if (posiadaz1 && !posiadaz2)
        {
            cout << tab[i] << endl;
        }
    }

    return 0;
}
