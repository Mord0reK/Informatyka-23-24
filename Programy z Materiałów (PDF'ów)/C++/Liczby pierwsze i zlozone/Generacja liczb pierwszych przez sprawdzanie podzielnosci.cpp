#include <iostream>

using namespace std;

int main()
{
    int n,lp,p,d;
    bool t;
    cin >> n;
    lp = 0;
    p = 2;
    while(lp < n)
    {
        t = true;
        for(d = 2; d < p; d++)
        {
            if(p % d == 0)
            {
                t = false;
                break;
            }
        }
        if(t)
        {
            cout << p << " ";
            lp++;
        }
        p++;
    }
    return 0;
} 