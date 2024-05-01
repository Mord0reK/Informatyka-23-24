#include <iostream>
using namespace std;
int main()
{
    int a,b,u,w,x,z,q;
    cin >> a >> b;
    u = 1; w = a;
    x = 0; z = b;
    while(w)
    {
        if(w < z)
        {
            q = u; u = x; x = q;
            q = w; w = z; z = q;
        }
        q = w / z;
        u -= q * x;
        w -= q * z;
    }
    if(z == 1)
    {
        if(x < 0)
        {
            x = x + b;
        }
        cout << x << endl;
    }
    else cout << "BRAK";
    return 0;
} 