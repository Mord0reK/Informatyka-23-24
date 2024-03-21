// Napisz program, który za pomoc¹ instrukcji while sumuje liczby parzyste w przedziale od 1 do 100.

#include <iostream>

using namespace std;

int main()
{
    int i = 0, sum = 0;
    while (i <= 100)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    cout << sum << endl;
    return 0;
}