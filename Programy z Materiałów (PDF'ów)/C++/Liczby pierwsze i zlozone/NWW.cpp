#include <iostream>

using namespace std;

int main()
{
    int a,b,t,ab;
    cin >> a >> b;
    ab = a * b;
    while(b)
    {
        t = b;
        b = a % b;
        a = t;
    }
    cout << ab / a << endl;
    return 0;
} 