//Napisz program, kt�ry:
//a.pobiera od u�ytkownika trzy liczby rzeczywiste a, b i c � d�ugo�ci bok�w tr�jk�ta
//b.oblicza i wy�wietla pole tr�jk�ta.
//UWAGA : mo�na zastosowa� wz�r Herona na pole tr�jk�ta,
//gdzie p = 0, 5 * (a + b + c)

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c;
    int pa, pb, pc, P , p;
    cin >> a >> b >> c;
    p = 0.5 * (a + b + c);
    pa = p - a;
    pb = p - b;
    pc = p - c;
    P = sqrt(p * pa * pb * pc);
    cout << "Pole = " << P << endl;
    return 0;
}
