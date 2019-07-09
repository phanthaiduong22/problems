#include <iostream>
#include <cmath>
using namespace std;
long long sizez(long long n)
{
	long long ans = 0;
	while (n > 0)
	{
		ans++;
		n /= 10;
	}
	return ans;
}
bool kaprekarNumber(long long n)
{
	long long temp, ans = 0, poww = 1;
	long long k = n * n;
	long long l = sizez(n);
	for (long long i = 0; i < l; i++)
	{
		temp = k % 10;
		ans += temp * poww;
		poww *= 10;
		k = k / 10;
	}
	if (ans + k == n)
		return true;
	else
	{
		while ((k % 10 == 0) && (k / 10 > 0))
		{
			if (k / 10 + ans == n)
				return true;
			k = k / 10;
		}
	}
	return false;
}
int main()
{
	long long p, q, ans = 0;
	//cout << (kaprekarNumber(77778));
	cin >> p >> q;
	for (long long i = p; i <= q; i++)
	{
		if (kaprekarNumber(i))
		{
			cout << i << " ";
			ans = 1;
		}
	}
	if (ans == 0)
		cout << "INVALID RANGE";
	system("pause");
}