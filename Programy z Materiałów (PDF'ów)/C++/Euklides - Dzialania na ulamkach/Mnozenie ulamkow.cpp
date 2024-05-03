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

wymierna Mnoz(wymierna a, wymierna b)
{
    wymierna c;
    int pom;
    pom = a.mian;
    a.mian = b.mian;
    b.mian = pom;
    skroc(a);
    skroc(b);
    c.licz = a.licz * b.licz;
    c.mian = a.mian * b.mian;
    return c;
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
    c = Mnoz(a,b);
    c = skroc(c);
    PiszUlamek(c);
    cout << "\n";
    return 0;
}