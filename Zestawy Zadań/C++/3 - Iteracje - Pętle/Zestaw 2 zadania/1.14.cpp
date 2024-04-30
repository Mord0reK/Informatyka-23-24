// Napisz program, który liczy i wyświetla wartość sumy wszystkich liczb podzielnych przez 5 lub 9 z
// przedziału od 1000 do 5000

#include <iostream>

using namespace std;

int main()
{
    int i, suma = 0;
    for (i = 1000; i <= 5000; i++)
    {
        if (i % 5 == 0 || i % 9 == 0)
        {
            suma += i;
        }
    }
    cout << suma << endl;
    return 0;
}
