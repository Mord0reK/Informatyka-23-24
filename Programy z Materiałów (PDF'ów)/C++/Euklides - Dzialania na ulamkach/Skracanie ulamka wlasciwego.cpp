#include <iostream>

using namespace std;

struct wymierna
{
    int licz;
    int mian;
};

int NWD(int a, int b)
{
    int t;
    while (b)
    {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}

wymierna skroc(wymierna a)
{
    int n;
    n = NWD(a.licz,a.mian);
    a.licz /= n;
    a.mian /= n;
    return a;
}

int main()
{
    wymierna a;
    cin >> a.licz >> a.mian;
    a = skroc(a);
    cout << a.licz << "/" << a.mian << endl;
    return 0;
}