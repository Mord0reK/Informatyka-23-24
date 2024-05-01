#include <iostream>

using namespace std;

int main()
{
    int a,b,t;
    cin >> a >> b;
    while (b)
    {
        t = b;
        b = a % b;
        a = t;
    }
    cout << a << endl;
    return 0;
} 