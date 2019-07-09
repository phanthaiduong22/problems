#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	string s;
	int t;
	cin >> s;
	if (trunc(sqrt(s.length())) == sqrt(s.length()))
		t = sqrt(s.length() - 1);
	else
		t = sqrt(s.length());
	for (int i = 0; i < t + 1; i++)
	{
		for (int j = 0; j < t+1; j++)
		{
			if (i + (j)*(t + 1) < s.length())
				cout << s[i + (j)*(t + 1)];
		}
		cout << " ";
	}
	system("pause");
}