//Napisz program, kt�ry:
//a.pobiera dwie liczby ca�kowite u i v
//b.wypisuje, ile razy u mie�ci si�(ca�kowicie) w v
//c.w kolejnym wierszu wypisuje reszt� z dzielenia v przez u
//d.w kolejnym wierszu wypisuje warto�� rzeczywist� v / u

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
