#include <iostream>
#include <map>
#include <string >
using namespace std;

int main()
{
	freopen("dictionariesandmaps.inp", "r", stdin);
	freopen("dictionariesandmaps.out", "w", stdout);
	int n;
	long long x;
	string s;
	cin >> n;
	map<string, long long>d;
	for (int i = 0; i < n; i++)
	{
		cin >> s >> x;
		d[s] = x;
	}
	while (cin >> s)
	{
		if (d[s] != 0)
			cout << s << "=" << d[s] << endl;
		else
			cout << "Not found" << endl;
	}
}