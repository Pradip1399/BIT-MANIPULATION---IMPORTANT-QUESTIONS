// IP : 1 1 2 5 3 2 3 4 7 4
// OP : 5 7

// 1 - Using brute force - 2 loops
// 2 - Using Map O(n log n)
// 3 - Bit Manipulation

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}

	int xorAll = 0;

	//xor of all elements in array
	for(int i=0;i<n;i++)
	{
		xorAll = (xorAll ^ a[i]);
	}

	//find first set bit from right in xor 
	int temp = xorAll;
	int count = 0;

	while(temp)
	{
		if(temp & 1)
			break;
		
		count++;
		temp = temp >> 1;
	}

	int xor1 = 0, xor2 = 0;
	for(int i=0;i<n;i++)
	{
		if( a[i] & (1 << count) )
			xor1 = (xor1 ^ a[i]);
		else
			xor2 = (xor2 ^ a[i]);
	}

	cout << "Duplicate numbers are : " << xor1 << " and " << xor2;

	return 0;
}