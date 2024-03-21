// Napisz program, który:
// a.pobiera liczbę naturalną N
// b.wyznacza i wypisuje ile cyfr liczby N jest równe 5.

#include <iostream>

using namespace std;

int main()
{
    unsigned long long N, temp;
    int licznik = 0;
    cin >> N;
    temp = N;
    while (temp > 0)
    {
        if (temp % 10 == 5)
        {
            licznik++;
        }
        temp /= 10;
    }
    cout << licznik << endl;
    return 0;
}
