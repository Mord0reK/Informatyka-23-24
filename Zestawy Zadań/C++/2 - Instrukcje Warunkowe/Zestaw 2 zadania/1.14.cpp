//Napisz program, który w kolejnych wierszach wypisuje 10 liczb losowych z przedziału od 1 do
//100

#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

int main()
{
    int i, losowana;
    srand(time(nullptr));
    for (i = 0; i < 10; i++)
    {
        losowana = rand() % 100;
        cout << losowana << " ";
    }
}

