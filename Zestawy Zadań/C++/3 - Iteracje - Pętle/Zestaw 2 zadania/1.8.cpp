// Napisz program, który trzykrotnie robi dokładnie to samo : wypisuje wszystkie liczby parzyste i
// niepodzielne prze 10 z przedziału od 50 do 150 – liczby oddziela znakiem tabulacji.
// Napisz kod używając po kolei pętli do – while, while i for

#include <iostream>

using namespace std;

int main()
{
    int i=50;
    do
    {
        if (i % 2 == 0 && i % 10 != 0)
        {
            cout << i << "\t";
        }
        ++i;
    } while (i <= 150);
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    i = 50;
    while (i <= 150)
    {
        if (i % 2 == 0 && i % 10 != 0)
        {
            cout << i << "\t";
        }
        i++;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    i = 50;
    for (i = 50; i <= 150; i++)
    {
        if (i % 2 == 0 && i % 10 != 0)
        {
            cout << i << "\t";
        }
    }
    return 0;
}

