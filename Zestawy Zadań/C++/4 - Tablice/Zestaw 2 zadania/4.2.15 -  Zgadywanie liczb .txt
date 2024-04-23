#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int L;
    int U;
    int liczbaprob = 0;
    int proby[100];
    srand(time(nullptr));
    L = rand() % 1001 - 1;
    
    do
    {
        cout << "Podaj liczbe: ";
        cin >> U;
        if (U < L)
        {
            cout << "Za mala" << endl;
        }
        else if (U > L)
        {
            cout << "Za duza" << endl;
        }
        if (L == U)
        {
            cout << "Brawo! " << endl;
            cout << "Twoje proby:";
            for (int i = 0; i < liczbaprob; i++)
            {
                cout << proby[i] << " ";
            }
        }
        else if (liczbaprob == 100)
        {
            cout << "Game Over christopher" << endl;
            cout << "Wylosowana liczba: " << L << endl;
            return 0;
        }
        else
        {
            proby[liczbaprob] = U;
            liczbaprob++;
        }

    } while (U != L);
    return 0;
}
