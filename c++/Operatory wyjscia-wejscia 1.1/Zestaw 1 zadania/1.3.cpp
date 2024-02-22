#Napisz program, który wyświetla na ekranie komputera pierwiastek kwadratowy z wartości predefiniowanej
#stałej π = 3,14... Należy przyjąć format wyświetlania tego pierwiastka z dokładnością dwóch miejsc po
#kropce.




#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    cout << "Pierwiastek kwadratowy z liczby Pi wynosi: " << fixed << setprecision(2) << sqrt(M_PI) << endl;
}

