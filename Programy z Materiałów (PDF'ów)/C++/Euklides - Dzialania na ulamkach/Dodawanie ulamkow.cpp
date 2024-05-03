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

wymierna dodaj(wymierna a, wymierna b)
{
    wymierna c;
    int nwd1 = NWD(a.mian, b.mian);
    c.licz = a.licz * (b.mian / nwd1) + b.licz * (a.mian / nwd1);
    int nwd2 = NWD(abs(c.licz), nwd1);
    c.licz /= nwd2;
    c.mian = (a.mian/nwd1) * (b.mian/nwd2);
    return c;
}

void PiszUlamek(wymierna a)
{
    if (a.licz < 0) cout << "(";
    cout << a.licz;
    if (a.mian > 1) cout << "/" << a.mian;
    if (a.licz < 0) cout << ")";
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
    wymierna a,b,c;
    cout << "Podaj licznik a: ";
    cin >> a.licz;
    cout << "Podaj mianownik a: ";
    cin >> a.mian;
    cout << "Podaj licznik b: ";
    cin >> b.licz;
    cout << "Podaj mianownik b: ";
    cin >> b.mian;
    c = dodaj(a,b);
    c = skroc(c);
    PiszUlamek(c);
    cout << "\n";
    return 0;
}