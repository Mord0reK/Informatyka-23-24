//Napisz program, który :
//a.Losuje kolejno 100000 liczb rzeczywistych z przedziału od 0 do 100 i liczy ile spośród tych
//liczb jest mniejszych od 50
//b.Wypisuje jaka część liczb była mniejsza od 50.

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int i, los, licznik = 0;
    srand(time(nullptr));
    for (i = 0; i <= 100000; i++)
    {
        los = rand() % 100;
        if (los <= 50)
        {
            licznik++;
        }
    }
    cout << licznik;
    return 0;
}

