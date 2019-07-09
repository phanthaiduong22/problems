#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int n, x, k;
	vector<int>a;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		a.push_back(x);
	}
	cin >> k;
	for (int i = 0; i < n; i++)
	{
		if (i != k - 1)
			cout << a[i] << " ";
	}
	system("pause");
	return 0;
}