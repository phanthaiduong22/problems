	#include <iostream>
	#include <vector>
	#include <algorithm>
	#include <queue>
	#include <map>
	#include <set>
	#include <string>

	using namespace std;

	int main()
	{
		string s;
		getline(cin, s);
		if ((s[0] == '?') || (s[1] == '?'))
		{
			int a = (s[3] - '0') * 10 + (s[4] - '0');
			int b = (s[6] - '0') * 10 + (s[7] - '0');
			int kq = b - a;
			int m = kq % 10;
			int m1 = kq / 10;
			if (s[1] == '?')
				cout << m1;
			else
				cout << m;
		}
		else
			if ((s[3] == '?') || (s[4] == '?'))
			{
				int a = (s[0] - '0') * 10 + (s[1] - '0');
				int b = (s[6] - '0') * 10 + (s[7] - '0');
				int kq = b - a;
				int m = kq % 10;
				int m1 = kq / 10;
				if (s[3] == '?')
					cout << m1;
				else
					cout << m;
			}
			else if ((s[6] == '?') || (s[7] == '?'))
			{
				int a = (s[3] - '0') * 10 + (s[4] - '0');
				int b = (s[0] - '0') * 10 + (s[1] - '0');
				int kq = b + a;
				int m = kq % 10;
				int m1 = kq / 10;
				if (s[6] == '?')
					cout << m1;
				else
					cout << m;
			}
		system("pause");
	}