#include <iostream>
#include <string>
#define MAX 105
using namespace std;

int main()
{
	freopen("happyladybugs.inp", "r", stdin);
	freopen("happyladybugs.out", "w", stdout);
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int l,d[MAX];
		string s;
		int ans = 0;
		int check = 0;
		cin >> l;
		for (int i = 0; i <= 26; i++)
			d[i] = 0;
		cin >> s;
		for (int i = 0; i < l; i++)
		{
			if (s[i] == '_')
				ans++;
			else
			{
				d[s[i] - 'A']++;
			}
		}
		if (ans == 0)
		{
			int k = 0;
			for (int i = 1; i < l; i++)
			{
				if (s[i] == s[i - 1])
				{
					k = 0;
				}
				else if (k == 1)
				{
					check = -1;
					break;
				}
				else
				{
					k = 1;
				}
			}
			for (int i = 0; i < l; i++)
				if (d[s[i] - 'A'] <= 1)
				{
					check = -1;
					break;
				}
			if (check == -1)
				cout << "NO" << endl;
			else
				cout << "YES" << endl;
		}
		else
		{
			for (int i = 0; i < l; i++)
				if ((s[i] != '_') && (d[s[i] - 'A'] <= 1))
				{
					check = -1;
					break;
				}
			if (check == -1)
				cout << "NO" << endl;
			else
				cout << "YES" << endl;
		}
	}
}