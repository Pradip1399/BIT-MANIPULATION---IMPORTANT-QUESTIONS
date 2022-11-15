#include <bits/stdc++.h>
using namespace std;

bool bitSetOrNot(int n, int i)
{
	int mask = (1 << i);
	bool setOrNot = (mask & n);

	return setOrNot;
}

int main()
{
	int n, i;

	cin >> n >> i;

	cout << "Bit is set or not : " << bitSetOrNot(n, i);

	return 0;
}