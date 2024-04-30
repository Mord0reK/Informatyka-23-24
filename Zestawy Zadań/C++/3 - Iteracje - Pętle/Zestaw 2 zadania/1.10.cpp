// Napisz program, który:
// a.Losuje kolejno milion liczb całkowitych z przedziału od 0 do 100 i liczy ile spośród tych liczb
// jest równych
//b.Wypisuje jaka część liczb była równa 100

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int i, los, licznik = 0;
    srand(time(nullptr));
    for (i = 0; i <= 1000000; i++;)
    {
        los = rand() % 100;
        if (los == 100)
        {
            licznik++;
        }
    }
    cout << licznik;
    return 0;
}

