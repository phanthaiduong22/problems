#include <iostream>

using namespace std;

int  main()
{
	freopen("savetheprisoner.inp", "r", stdin);
	freopen("savetheprisoner.out", "w", stdout);
	long long  T, n, m, q;
	cin >> T;
	for (long long  i = 0; i < T; i++)
	{
		cin >> n >> m >> q;
		if ((m - 1) % n + q > n)
			cout << (m - 1) % n + q - n<<endl;
		else
		cout << (m - 1) % n + q << endl;
	}
}