#include <iostream>

using namespace std;

int main()
{
     unsigned int i,n,p,q,x;
     bool * S; // Lista dynamiczna 
     cin >> n;
     S = new bool[n + 1]; // Wypełnienie listy danymi Bool (true,false) 
     for(i = 2; i <= n; i++) S[i] = true; // Ustawianie każdego elementu w liscie na wartość True
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
     for(i = 2; i <= n; i++) if(S[i]) cout << i << " "; // Wypisywanie liczb pierwszych
     cout << endl;
     delete [] S; // Usuwanie listy z pamięci komputera
     return 0;
}
