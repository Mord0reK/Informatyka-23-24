// Napisz program, który policzy i wypisze silnię zadanej liczby n, gdzie n > 0.
// Jeśli użytkownik poda liczbę ujemną, program powinien wypisać „BŁĄD”.Silnia liczb n jest
// iloczynem kolejnych liczb naturalnych od 1 do n(dla zera wartość silni wynosi 1).
// Program powinien poprawnie policzyć silnię 20

#include <iostream>

using namespace std;

int main()
{
    double n, silnia = 0, i;
    cin >> n;
    if (n < 0)
    {
        cout << "blad" << endl;
        return 0;
    }
    if (n == 0)
    {
        cout << 1 << endl;
        return 0;
    }
    silnia = 1;
    for (i = 1; i <= n; i++)
    {
        silnia *= i;
    }
    cout << silnia << endl;
    return 0;
}
