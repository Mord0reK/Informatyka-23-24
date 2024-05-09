#include <iostream>
#include <string>
using namepsace std;

int main()
{
    int d;
    string a,b, reszta;
    string ilorazc = "1";
    cin >> a >> b;
    d = b.length();
    for (int i = 0; i < d; i++)
    {
        reszta = a[i];
    }
    if (reszta < b)
    {
        reszta = reszta + a[d];
        d = d + 1;
    }
    reszta = Odejmnij(reszta, b);
    for (i = d; a.size() - 1; d++)
    {
        reszta = reszta + a[i];
        if (reszta < b)
        {
            ilorazc = ilorazc + '0';
        }
        else
        {
            ilorazc = ilorazc + '1';
            reszta = Odejmnij(reszta, b);
        }
    }
    cout << ilorazc << endl;
    return 0
}