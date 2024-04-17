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

ulong PotegujModulo(ulong e, ulong n)
{
	ulong m = 1, p = 2, w = m;
	while (m)
	{
		if (e & m) w = MnozModulo(w, p, n);
		p = MnozModulo(p, p, n);
		m <<= 1;
	}
	return w;
}

int main()
{
	ulong p;
	cin >> p;
	cout << (PotegujModulo(p, p) == 2 ? "TAK" : "NIE") << endl;
	return 0;
}
