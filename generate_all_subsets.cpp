//Generate all subsets

#include <bits/stdc++.h>
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

	vector< vector<int> > ds;

	for (int num = 0; num <= (1 << n)-1; ++num)
	{
		vector<int> v;

		for(int bit=0; bit < n; bit++)
		{
			if(num & (1<<bit))
				v.push_back(a[bit]);
		}

		ds.push_back(v);
	}

	for(auto it : ds)
	{
		for(auto it1 : it)
			cout << it1 << " ";
		cout << endl;
	}

	return 0;
}

//TC = 2^n * n
//This algorithm is applicable for n = 16/17/18