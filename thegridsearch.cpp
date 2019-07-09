#include <iostream>
#include <string>
#define MAX 1005
using namespace std;
int a[MAX][MAX], b[MAX][MAX];
bool check(int x, int y, int n1, int m1)
{
	for (int i = 0; i < n1; i++)
		for (int j = 0; j < m1; j++)
			if (a[x + i][y + j] != b[i][j])
				return false;
	return true;
}
int main()
{
	freopen("thegridsearch.inp", "r", stdin);
	freopen("thegridsearch.out", "w", stdout);
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		string s;
		int n, m, n1, m1;
		int ans = 0;
		cin >> n >> m;
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			for (int j = 0; j < m; j++)
				a[i][j] = s[j];
		}
		cin >> n1 >> m1;
		for (int i = 0; i < n1; i++)
		{
			cin >> s;
			for (int j = 0; j < m1; j++)
				b[i][j] = s[j];
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (a[i][j] == b[0][0])
				{
					if (check(i,j,n1,m1))
					{
						cout << "YES" << endl;;
						ans = 1;
						break;
					}
				}
			}
			if (ans == 1)
				break;
		}
		if (ans == 0)
			cout << "NO" << endl;
	}
}