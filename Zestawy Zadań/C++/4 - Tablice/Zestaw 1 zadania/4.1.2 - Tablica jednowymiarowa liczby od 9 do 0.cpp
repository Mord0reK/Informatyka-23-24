#include <iostream>

using namespace std;

int main()
{
    int dane[10];
    for (int i = 9; i >= 0; i--)
    {
        dane[i] = i;
        cout << dane[i] << " ";
    }
    return 0;
}
