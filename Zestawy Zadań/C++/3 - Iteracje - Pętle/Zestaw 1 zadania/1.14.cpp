// Napisz program, który za pomoc¹ instrukcji do ... while sumuje liczby nieparzyste w przedziale od 1 do 100.

#include <iostream>

using namespace std;

int main()
{
    int i = 0, sum = 0;
    do
    {
        if (i % 2 == 1)
        {
            sum = sum + i;
        }
        i++;
    } while (i <= 100);
    cout << sum << endl;
    return 0;
}