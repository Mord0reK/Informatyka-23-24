#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   unsigned int p,i,g;
   cin >> p;
   g = (unsigned int)sqrt(p);
   for(i = 2; i <= g; i++)
   {
     while(!(p % i))
     {
       cout << i << " ";
       p /= i;
     }
    if(p == 1) break;
   }
   if(p > 1) cout << p;
   cout << endl;
   return 0;
}
