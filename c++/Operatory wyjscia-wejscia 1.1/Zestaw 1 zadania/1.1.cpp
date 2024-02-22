//Napisz program, który oblicza pole prostokąta. Wartości boków a i b wprowadzamy z klawiatury. W
//programie należy przyjąć, że zmienne a i b oraz pole są typu double (rzeczywistego). Przyjmujemy format
//wyświetlania ich na ekranie z dokładnością dwóch miejsc po kropce.

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
