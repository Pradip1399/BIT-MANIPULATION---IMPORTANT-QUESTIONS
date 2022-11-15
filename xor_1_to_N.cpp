#include <bits/stdc++.h>
using namespace std;

int xorFrom1ToN(int n)
{
	if(n % 4 == 0)
		return n;

	if(n % 4 == 1)
		return 1;

	if(n % 4 == 2)
		return n+1;


	if(n % 4 == 3)
		return 0;

	return 0;
}

int main()
{
	// int n;
	// cin >> n;

	// cout << xorFrom1ToN(n);

	int l,r;
	cin >> l;
	cin >> r;

	cout << ( xorFrom1ToN(l-1) ^ xorFrom1ToN(r) );

	return 0;
}