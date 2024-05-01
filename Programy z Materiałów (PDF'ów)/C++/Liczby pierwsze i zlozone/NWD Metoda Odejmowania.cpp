#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    while(a != b)
    if(a < b)
    {
        b -= a;
    }
    else
    {
        a -= b;
    } 
    cout << a << endl;
    return 0;
} 