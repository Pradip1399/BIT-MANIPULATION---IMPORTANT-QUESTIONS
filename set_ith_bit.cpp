#include <bits/stdc++.h>
using namespace std;

int setbit(int n, int i)
{
	int mask = (1 << i);
	int newNum = (mask | n);

	return newNum;
}

int main()
{
	int n, i;

	cin >> n >> i;

	cout << "New n after setting i-th bit : " << setbit(n, i);

	return 0;
}