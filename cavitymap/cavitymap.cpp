#include <iostream>
#include <string>
#define MAX 105
int a[MAX][MAX];
using namespace std;
bool cavity(int x, int y)
{
	if  ((a[x][y - 1] >= a[x][y]) || (a[x - 1][y] >= a[x][y]) || (a[x + 1][y] >= a[x][y]) || (a[x][y + 1] >= a[x][y]))
		return false;
	return true;
}
int main()
{

	freopen("cavitymap.inp", "r", stdin);
	freopen("cavitymap.out", "w", stdout);
	int n;
	string s;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> s;
		for (int j = 1; j <= n; j++)
		{
			a[i][j] = s[j-1]-'0';
		}
	}
	for (int i = 0; i <= n + 1;i++)
	{
		a[0][i] = MAX;
		a[i][0] = MAX;
		a[n + 1][i] = MAX;
		a[i][n + 1] = MAX;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (cavity(i, j))
				cout << "X";
			else
				cout << a[i][j];
		}
		cout << endl;
	}
}