#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#define MAX 30000
using namespace std;
long long d[MAX], dd[MAX];
int main()
{
	freopen("beautifultriplets.inp", "r", stdin);
	freopen("beautifultriplets.out", "w", stdout);
	long long n, k, x;
	for (long long i = 0; i < MAX; i++)
		dd[i] = 1;
	vector<int>a;
	cin >> n >> k;
	for (long long i = 0; i < n; i++)
	{
		cin >> x;
		a.push_back(x);
		d[x]++;
	}
	for (long long i = 1; i < n; i++)
	{
		if (a[i] - k >= 0)
			if (d[a[i] - k] > 0)
			{
				dd[a[i]] = dd[a[i] - k] + 1;
			}
	}
	long long ans = 0;
	for (long long i = 0; i < n; i++)
	{
		//cout << dd[a[i]] << " ";
		if (dd[a[i]] >= 3)
			ans += d[a[i]] * d[a[i] - k] * d[a[i] - k - k];
	}
	cout << ans;
	return 0;
}