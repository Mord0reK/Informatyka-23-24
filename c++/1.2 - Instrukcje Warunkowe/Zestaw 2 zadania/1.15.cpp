//Napisz program, który wypisze w kolejnych wierszach wszystkie liczby nieparzyste i podzielne
//przez 3 lub 7 z przedziału od 1 do 601 (włącznie).

#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

int main()
{
    int i;
    for (i = 1; i <= 601; i++)
    {
        if (i % 2 == 1)
        {
            if (i % 3 == 0 || i % 7 == 0)
            {
                cout << i << endl;
            }
        }
    }
}

