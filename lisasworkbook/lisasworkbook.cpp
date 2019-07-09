#include <iostream>
#include <vector>
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)

using namespace std;

int main()
{
	freopen("lisaworkbook.inp", "r", stdin);
	freopen("lisaworkbook.out", "w", stdout);
	int n, k, x, number_l, number_r, ans = 0;
	int chap = 1;
	int page = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		number_l = 1 - k;
		number_r = k - k;
		cin >> x;
		for (int j = 0; j < x / k; j++)
		{
			number_l += k;
			number_r += k;
			page++;
			if ((page <= number_r) && (page >= number_l))
				ans++;
		}
		if (x % k != 0)
		{
			page++;
			number_r += x % k;
			number_l += k;
			if ((page <= number_r) && (page >= number_l))
				ans++;
		}
	}
	cout << ans;
}