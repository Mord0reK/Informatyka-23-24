#include <iostream>

using namespace std;

int main()
{
     unsigned int i,n,p,q,x;
     bool * S;
     cin >> n;
     S = new bool[n + 1];
     for(i = 2; i <= n; i++) S[i] = true;
     p = 2;
     while(p * p <= n)
     {
       q = p;
       while(p * q <= n)
       {
         x = p * q;
         while(x <= n)
         {
           S[x] = false;
           x *= p;
         }
       while(!S[++q]);
       }
      while(!S[++p]);
     }
     for(i = 2; i <= n; i++) if(S[i]) cout << i << " ";
     cout << endl;
     delete [] S;
     return 0;
}
