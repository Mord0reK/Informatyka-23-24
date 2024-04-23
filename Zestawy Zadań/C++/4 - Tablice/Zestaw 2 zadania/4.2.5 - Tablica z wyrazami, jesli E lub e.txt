#include <iostream>
#include <string>

using namespace std;

int main()
{
    string tab[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> tab[i];
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= tab[i].length(); j++)
        {
            if (tab[i][j] == 'E')
            {
                cout << tab[i] << '*' << endl;
                break;
            }
            else
            {
                if (tab[i][j] == 'e')
                {
                    cout << tab[i] << endl;
                    break;
                }
            }
        }
    }
    return 0;
        
}
