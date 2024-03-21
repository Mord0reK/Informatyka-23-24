#include <iostream>
#include <cmath>

using namespace std;

int main()
  {
     unsigned int g,i,n,w;
     bool * S; // Lista dynamiczna 
     cin >> n;
     S = new bool[n + 1]; // Wypełnienie listy danymi Bool (true,false) 
     for(i = 2; i <= n; i++) S[i] = true; // Ustawianie każdego elementu w liscie na wartość True
     g = (unsigned int)sqrt(n); // Wyznaczenie granicy szukania liczb pierwszych do pierwiastka z n
     for(i = 2; i <= g; i++)
       if(S[i])
       {
         w = i * i;
         while(w <= n)
         {
           S[w] = false; w += i;
         }
       } 
     for(i = 2; i <= n; i++) if(S[i]) cout << i << " "; // Wypisywanie liczb pierwszych
     cout << endl;
     delete [] S; // Usuwanie listy z pamięci komputera
     return 0;
}
