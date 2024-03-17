// Napisz program, który:
// a.pobiera od użytkownika liczbę rzeczywistą L
// b.wyznacza i wypisuje ile kwadratów kolejnych liczb naturalnych należy dodać, aby ich suma
// przekroczyła L
// c.pobiera od użytkownika znak
// d.jeśli podany znak jest równy ‘R’ lub ‘r’, to ponownie pobiera znak(skok do punktu c).

#include <iostream>

using namespace std;

int main()
{
    float L, sum = 0;
    int i = 1, licznik = 0;
    cin >> L;
    while (sum <= L)
    {
        licznik++;
        sum += i * i;
        i++;
    }
    cout << licznik << endl;
    char x;
    cin >> x;
    while (x == 'R' || x == 'r')
    {
        cin >> x;
    }
    return 0;
}
