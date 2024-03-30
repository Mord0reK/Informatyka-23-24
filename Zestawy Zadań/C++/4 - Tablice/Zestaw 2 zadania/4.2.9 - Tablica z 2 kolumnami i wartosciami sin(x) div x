#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    float tab[2][100];
    int a = 0;
    for (float i = 0.01; i < 1; i = i + 0.01)
    {
        if (a < 100)
        {
            tab[0][a] = i;
            a++;
        }
    }
    for (int a = 0; a < 100; a++)
    {
        tab[1][a] = sin(tab[0][a]) / tab[0][a];
    }
    for (int a = 0; a < 100; a++)
    {
        cout << fixed << setprecision(2) << tab[0][a] << " ";
        cout << fixed << setprecision(2) << tab[1][a] << endl;
    }
    return 0;
}
