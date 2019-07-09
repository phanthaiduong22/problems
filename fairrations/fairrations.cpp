#include <iostream>
#include <vector>
using namespace std;

int main()
{
	freopen("fairrations.inp", "r", stdin);
	freopen("fairrations.out", "w", stdout);
	int n, x, check, ans;
	ans = 0;
	check = 0;
	vector<int>a;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		a.push_back(x);
		if (x % 2 == 1)
			check++;
	}
	if (check % 2 == 0)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] % 2 == 1)
			{
				a[i]++;
				a[i + 1]++;
				ans+=2;
			}
		}
		cout << ans;
	}
	else
	{
		cout << "NO";
	}
}