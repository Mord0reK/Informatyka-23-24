#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a, b, pole;
    cout << "Podaj a: " << endl;
    cin >> a;
    cout << "Podaj b: " << endl;
    cin >> b;
    pole = a * b;
    cout << fixed;
    cout << setprecision(2) << endl;
    cout << "Pole wynosi: " << pole << endl;
}
