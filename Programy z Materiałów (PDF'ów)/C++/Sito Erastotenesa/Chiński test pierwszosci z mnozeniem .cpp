#include <iostream>
using namespace std;
typedef unsigned long long ulong;

ulong MnozModulo(ulong a, ulong b, ulong n)
{
	ulong m = 1, w = 0;
	while (m)
	{
		if (b & m) w = (w + a) % n;
		a = (a << 1) % n;
		m <<= 1;
	}
	return w;
}
int main()
{
	ulong e, n, m = 1, p = 2, w = 1;
	cin >> e >> n;
	while (m)
	{
		if (e & m) w = MnozModulo(w, p, n);
		p = MnozModulo(p, p, n);
		m <<= 1;
	}
	cout << w << endl;
	return 0;
}
