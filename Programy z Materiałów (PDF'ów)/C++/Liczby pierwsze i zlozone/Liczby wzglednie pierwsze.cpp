#include <iostream>
using namespace std;
int main()
{
    int a,b,ax,bx,p,i,t;
    cin >> a >> b >> p;
    for(i = a; i <= b; i++)
    {
        ax = i;
        bx = p;
        while(bx)
        {
            t = bx;
            bx = ax % bx;
            ax = t;
        }
        if(ax == 1) cout << i << endl;;
    }
    return 0;
}