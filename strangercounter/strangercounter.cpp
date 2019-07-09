#include <iostream>

using namespace std;

int main()
{
	long long n, k;
	k = 3;
	cin >> n;
	while (n-k > 0)
	{
		n = n - k;
		k = k * 2;
	}
	//cout << n<<k;
	cout << k - n + 1;
	system("pause");
}