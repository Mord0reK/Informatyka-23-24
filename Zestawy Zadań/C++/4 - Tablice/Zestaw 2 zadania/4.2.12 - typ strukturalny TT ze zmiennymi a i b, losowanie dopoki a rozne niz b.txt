#include <iostream>
#include <algorithm>

using namespace std;

struct tt
{
    int a,b;
    float R;
};

int main()
{
    tt z;
    srand(time(nullptr));
    do
    {
        z.a = rand() % 6 + 1;
        z.b = rand() % 6 + 1;
        z.R = rand() % 101 / 10.0;
    } while (z.a == z.b);
    cout << "a = " << z.a << endl;
    cout << "b = " << z.b << endl;
    cout << "R = " << z.R << endl;
    return 0;
}
