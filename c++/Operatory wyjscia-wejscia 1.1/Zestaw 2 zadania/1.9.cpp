//Napisz program, który:
//a.pobiera dwie liczby ca³kowite u i v
//b.wypisuje, ile razy u mieœci siê(ca³kowicie) w v
//c.w kolejnym wierszu wypisuje resztê z dzielenia v przez u
//d.w kolejnym wierszu wypisuje wartoœæ rzeczywist¹ v / u

#define _USE_MATH_DEFINES
#include <iostream>

using namespace std;

int main()
{
    int u, v;
    cin >> u >> v;
    cout << v / u << " ";
    cout << v % u << " ";
    cout << static_cast<double>(v) / u << endl;
    return 0;
}
