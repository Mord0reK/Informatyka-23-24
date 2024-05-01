#include <iostream>

using namespace std;

int main()
{
    double x;
    int i,a,r1,r2;
    cin >> x;
    a = 0; r1 = 1; r2 = 2;
    for(i = 0; a <= x; i++)
    {
        a = a + r1;
        r1 = r1 + r2;
    }
    i--;
    cout << i << endl;
    return 0;
}