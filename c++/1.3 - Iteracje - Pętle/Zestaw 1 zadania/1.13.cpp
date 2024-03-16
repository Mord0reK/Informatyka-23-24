// Napisz program, który za pomoc¹ instrukcji for sumuje liczby nieparzyste w przedziale od 1 do 100.

#include <iostream>

using namespace std;

int main()
{
    int i = 0, sum = 0;
    for (i = 0; i <= 100; i++)
    {
        if (i % 2 == 1)
        {
            sum = sum + i;
        }
    }
    cout << sum << endl;
    return 0;
}