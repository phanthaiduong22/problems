#include <iostream>

using namespace std;

int main()
{
	freopen("sherlockandsquares.inp", "r", stdin);
	freopen("sherlockandsquares.out", "w", stdout);
	int T, a, b, kq;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		kq = 0;
		cin >> a >> b;
		for (int j = 1; j < 10000; j++)
			if ((j*j <= b) && (j*j >= a))
				kq++;
		cout << kq<<endl;
	}
}