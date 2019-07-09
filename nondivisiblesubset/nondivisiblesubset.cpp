#include <iostream>

using namespace std;
int d[100000];
int main()
{
	freopen("nondivisiblesubset.inp", "r", stdin);
	freopen("nondivisiblesubset.out", "w", stdout);
	int a[100000];
	int n, x, max = 0,k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		a[i] = x;
		for (int j = i-1 ; j >=0; j--)
			if (((x + a[j]) % k != 0) &&(d[j] + 1 > max))
			{
				max = d[j]+1;
				d[i] = max;
			}
		if (i == 0)
			if ((x + a[0]) % k != 0)
				d[0] = 1;
	}
	cout << max;
}