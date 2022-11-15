x#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	int sum;

	for (int num = 0; num <= (1 << n)-1; ++num)
	{
		sum=0;
		for(int bit=0; bit < n; bit++)
		{
			if(num & (1<<bit))
				sum=sum+a[bit];
			else
				sum=sum-a[bit];
		}

		if(sum % 360 == 0)
		{
			cout << "Yes";
			return 0;
		}
	}
	cout << "No";
	return 0;
}

//TC = 2^n * n
//This algorithm is applicable for n = 16/17/18