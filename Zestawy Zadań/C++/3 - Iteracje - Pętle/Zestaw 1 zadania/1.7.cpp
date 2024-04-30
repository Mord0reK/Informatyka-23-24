// Napisz program, który za pomoc¹ instrukcji for sumuje liczby ca³kowite od 1 do 100.

#include <iostream>

using namespace std;

int main()
{
    int i, sum;
    for (i = 1; i <= 100; i++)
    {
        sum = sum + i;
    }
    cout << sum << endl;
    return 0;
}