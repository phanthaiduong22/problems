#include <iostream>
#include <string>
#define MAX 205
using namespace std;

int main()
{
	freopen("thebombermangame.inp", "r", stdin);
	freopen("thebombermangame.out", "w", stdout);
	int r, c, n;
	char x;
	cin >> r >> c >> n;
	char s0[MAX][MAX], s1[MAX][MAX];
	for (int i = 1; i <= r; i++)
		for (int j = 1; j <= c; j++)
		{
			cin >> x;
			if (x == '.')
				s0[i][j] = '1';
			else
				s0[i][j] = '0';
		}
	for (int i = 0; i <= r; i++)
	{
		s0[i][0] = '1';
		s0[i][c + 1] = '1';
	}
	for (int i = 0; i <= c; i++)
	{
		s0[0][i] = '1';
		s0[r + 1][i] = '1';
	}
	if (n % 2 == 0)
	{
		for (int i = 1; i <= r; i++)
		{
			for (int j = 1; j <= c; j++)
				cout << "O";
			cout << endl;
		}
	}
	else
	{
		if (n > 5)
		{
			n = n % 4;
			if (n == 1)
				n = 105;
			else
				n = 107;
		}
		for (int k = 1; k <= n / 2; k++)
		{
			for (int i = 1; i <= r; i++)
			{
				for (int j = 1; j <= c; j++)
				{
					if (s0[i][j] == '0')
						s1[i][j] = '1';
					else if ((s0[i - 1][j] == '0') || (s0[i][j - 1] == '0') || (s0[i + 1][j] == '0') || (s0[i][j + 1] == '0'))
						s1[i][j] = '1';
					else s1[i][j] = '0';
				}
			}
			for (int i = 1; i <= r; i++)
			{
				for (int j = 1; j <= c; j++)
				{
					s0[i][j] = s1[i][j];
				}
			}
		}
		for (int i = 1; i <= r; i++)
		{
			for (int j = 1; j <= c; j++)
			{
				if (s0[i][j] == '0')
					cout << 'O';
				else
					cout << '.';
			}
			cout << endl;
		}
	}
}