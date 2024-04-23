//Napisz program, który:
//a. Pobiera dwie liczby całkowite L1 i L2
//b. W kolejnych wierszach wyświetla ich sumę oraz iloczyn
//c. W kolejnym wierszu czeka na wprowadzenie dowolnego znaku

#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int l1, l2;
    cin >> l1;
    cin >> l2;
    cout << l1 + l2 << endl;
    cout << l1 * l2 << endl;
    system("pause");
}

