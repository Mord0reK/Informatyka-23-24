//Napisz program, który:
//a.pobiera od u¿ytkownika trzy liczby rzeczywiste a, b i c – d³ugoœci boków trójk¹ta
//b.oblicza i wyœwietla pole trójk¹ta.
//UWAGA : mo¿na zastosowaæ wzór Herona na pole trójk¹ta,
//gdzie p = 0, 5 * (a + b + c)

#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <iomanip>

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
