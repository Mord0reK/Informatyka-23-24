// Napisz program, który policzy i wypisze silnię zadanej liczby n, gdzie n > 0.
// Jeśli użytkownik poda liczbę ujemną, program powinien wypisać „BŁĄD”.Silnia liczb n jest
// iloczynem kolejnych liczb naturalnych od 1 do n(dla zera wartość silni wynosi 1).
// Program powinien poprawnie policzyć silnię 20

#include <iostream>

using namespace std;

int main()
{
    double n, silnia = 1, i;
    bool er = true;
    cin >> n;
    if (n == 0)
    {
        cout << "blad" << endl;
        er = false;
    }
    if (er)
    {
        for (i = 1; i <= n; i++)
        {
            silnia *= i;
        }
    }
    cout << silnia << endl;
    return 0;
}

