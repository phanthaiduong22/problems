#include <iostream>

using namespace std;
int n, m, queen_x, queen_y;
int d[100000][100000];
int up()
{
	int kq = 0;
	for (int i = queen_x - 1; i >= 1; i--)
	{
		if (d[i][queen_y] == 1)
			break;
		else
			kq++;
	}
	return kq;
}
int down()
{
	int kq = 0;
	for (int i = queen_x + 1; i <= n; i++)
	{
		if (d[i][queen_y] == 1)
			break;
		else
			kq++;
	}
	return kq;
}
int right()
{
	int kq = 0;
	for (int i = queen_y + 1; i <= n; i++)
	{
		if (d[queen_x][i] == 1)
			break;
		else
			kq++;
	}
	return kq;
}
int left()
{
	int kq = 0;
	for (int i = queen_y - 1; i >= 1; i--)
	{
		if (d[queen_x][i] == 1)
			break;
		else
			kq++;
	}
	return kq;
}
int upright()
{
	int k = 1;
	int kq = 0;
	while (queen_x - k >= 1 && queen_y + k <= n)
	{
		if (d[queen_x - k][queen_y + k] == 1)
			break;
		else
			kq++;
		k++;
	}
	return kq;
}
int upleft()
{
	int k = 1;
	int kq = 0;
	while (queen_x - k >= 1 && queen_y - k >= 1)
	{
		if (d[queen_x - k][queen_y - k] == 1)
			break;
		else
			kq++;
		k++;
	}
	return kq;
}
int downright()
{
	int k = 1;
	int kq = 0;
	while (queen_x + k <= n && queen_y + k <= n)
	{
		if (d[queen_x + k][queen_y + k] == 1)
			break;
		else
			kq++;
		k++;
	}
	return kq;
}
int downleft()
{
	int k = 1;
	int kq = 0;
	while (queen_x + k <= n && queen_y - k >= 1)
	{
		if (d[queen_x + k][queen_y - k] == 1)
			break;
		else
			kq++;
		k++;
	}
	return kq;
}
int main()
{
	freopen("queensattackii.inp", "r", stdin);
	freopen("queensattackii.out", "w", stdout);
	cin >> n >> m;
	cin >> queen_x >> queen_y;
	int x, y;
	for (int i = 1; i <= m; i++)
	{
		cin >> x >> y;
		d[x][y]++;
	}
	cout << up() + right() + down() + left() + upright() + upleft() + downright() + downleft();
}