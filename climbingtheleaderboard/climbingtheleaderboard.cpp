#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

bool option(long long a, long long b)
{
	return a < b;
}
int main()
{
	freopen("climbingtheleaderboard.inp", "r", stdin);
	freopen("climbingtheleaderboard.out", "w", stdout);
	vector<long long>a;
	long long x;
	int m, n,k;
	map<long long, long long>d;
	k = 0;
	cin >> n;
	for (long long i = 0; i < n; i++)
	{
		cin >> x;
		if (d[x] == 0)
		{
			d[x]++;
			a.push_back(x);
			k++;
		}
	}
	sort(a.begin(), a.end(), option);
	cin >> m;	
	for (long long i = 0; i < m; i++)
	{
		vector<long long>::iterator it;
		cin >> x;
		if (x >= a[k - 1])
			cout << 1 << endl;
		else if (x < a[0])
			cout << k + 1 << endl;
		else if (x == a[0])
			cout << k << endl;
		else
		{
			it = lower_bound(a.begin(), a.end(), x);
			long long index = it - a.begin();
			if (a[index] == x)
				cout << k - index << endl;
			else
				cout << k - index + 1 << endl;
		}
	}
}
