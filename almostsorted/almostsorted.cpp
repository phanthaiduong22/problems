#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 100000
using namespace std;

int main()
{
	freopen("almostsorted.inp", "r", stdin);
	freopen("almostsorted.out", "w", stdout);
	int n, x, p, q;
	vector<int>a, b;
	int c[MAX], d[MAX];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		a.push_back(x);
		b.push_back(x);
	}
	int ans = 0;
	sort(b.begin(), b.end());
	for (int i = 0; i < n; i++)
	{
		if (a[i] != b[i])
		{
			ans = -1;
			break;
		}
	}
	if (ans == 0)
	{
		cout << "yes";
		//exit;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] != b[i])
			{
				p = i;
				break;
			}
		}
		for (int i = n - 1; i >= 0; i--)
		{
			if (a[i] != b[i])
			{
				q = i;
				break;
			}
		}
		for (int i = 0; i < n; i++)
		{
			int temp = a[p];
			if (i == p)
				d[p] = a[q];
			else if (i == q)
				d[q] = temp;
			else
				d[i] = a[i];
		}
		for (int i = 0; i < n; i++)
			if (d[i] != b[i])
			{
				ans = -2;
				break;
			}
		if (ans == -1)
		{
			cout << "yes" << endl << "swap " << p + 1 << " " << q + 1;
			//exit;
		}
		else
		{
			int j = 0;
			for (int i = 0; i < n; i++)
			{
				if ((i >= p) && (i <= q))
				{
					c[i] = a[q - j];
					j++;
				}
				else
					c[i] = a[i];
			}
			for (int i = 0; i < n; i++)
				if (c[i] != b[i])
				{
					ans = -3;
					break;
				}
			if (ans == -2)
			{
				cout << "yes" << endl << "reverse " << p + 1 << " " << q + 1;
				//exit;
			}
			else if (ans == -3)
				cout << "no";
		}
	}
}