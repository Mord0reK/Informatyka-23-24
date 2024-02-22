//Napisz program, który oblicza sumę, różnicę, iloczyn i iloraz dla dwóch liczb x i y wprowadzanych z
//lawiatury. W programie przyjmujemy, że liczby x i y są typu double (rzeczywistego).
//Dla zmiennych x, y, suma, roznica, iloczyn i iloraz należy przyjąć format wyświetlania ich na
//ekranie z dokładnością dwóch miejsc po kropce.

#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    float x, y, suma, roznica, iloczyn, iloraz;
    cout << "Podaj x: "; cin >> x;
    cout << "Podaj y: "; cin >> y;
    cout << "Suma wynosi: " << fixed << setprecision(2) << x + y << endl;
    cout << "Roznica wynosi: " << fixed << setprecision(2) << x - y << endl;
    cout << "Iloczyn wynosi: " << fixed << setprecision(2) << x * y << endl;
    cout << "Iloraz wynosi: " << fixed << setprecision(2) << x / y << endl;
}

