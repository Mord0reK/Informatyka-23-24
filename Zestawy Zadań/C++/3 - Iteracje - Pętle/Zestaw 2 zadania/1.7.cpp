// Napisz program, który robi trzykrotnie dokładnie to samo
// a.Pobiera od użytkownika liczbę całkowitą dodatnią n(n > 0)
// b.Wypisuje w kolejnych wierszach liczby całkowite od 1 do n(włącznie).
// Napisz kod używając po kolei pętli for, do – while oraz while

#include <iostream>

using namespace std;

int main()
{
    int i, n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    i = 1;
    do
    {
        cout << i << " ";
        i++;
    } while (i <= n);
    cout << endl;
    i = 1;
    while (i <= n)
    {
        cout << i << " ";
        i++;
    }
    return 0;
}

