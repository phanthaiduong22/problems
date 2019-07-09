#include <iostream>

using namespace std;

int main()
{
	freopen("jumpingontheclouds.inp", "r", stdin);
	freopen("jumpingontheclouds.out", "w", stdout);
	int n, k;
	int ans = 100;
	int a[30];
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int i = k;
	while (i < n)
	{
		if (a[i] == 1)
			ans = ans - 1 - 2;
		else
			ans = ans - 1;
		if (i + k > n)
			break;
		i += k;
	}
	if (a[0] == 0)
		ans -= 1;
	else
		ans = ans - 1 - 2;
	cout << ans;
	return 0;
}