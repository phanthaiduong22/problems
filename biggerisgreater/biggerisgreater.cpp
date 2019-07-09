#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct option
{
	bool operator()(const int &a, const int &b)
		const
	{
		return a < b;
	}
};
int main()
{
	freopen("biggerisgreater.inp", "r", stdin);
	freopen("biggerisgreater.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int	kq = 0;
		string s;
		priority_queue<int, vector<int>, option>pq;
		cin >> s;
		int max = s[s.length() - 1] - 'a';
		pq.push(max);
		for (int i = s.length() - 2; i >= 0; i--)
		{
			if (s[i] - 'a' >= max)
			{
				max = s[i] - 'a';
				pq.push(s[i] - 'a');
			}
			else
			{
				int min = 100;
				int m = -1;
				int l = pq.size();
				vector<int>a;
				for (int j = 0; j < l; j++)
				{
					int temp = pq.top();
					pq.pop();
					if ((temp < min)&&(temp>(s[i]-97)))
						min = temp;
					m++;
					a.push_back(temp);
				}
				int d = 0;
				for (int i = 0; i < a.size(); i++)
				{
					if (d == 1)
					{
						pq.push(a[i]);
					}
					else
						if (a[i] == min)
						{
							d = 1;
						}
						else
							pq.push(a[i]);

				}
				pq.push(s[i]-'a');
				s[i] = (char)(min + 97);
				for (int j = s.length() - 1; j > i; j--)
				{
					s[j] = (char)(pq.top() + 97);
					pq.pop();
				}
				kq = 1;
				break;
			}
		}
		if (kq == 0)
			cout << "no answer" << endl;
		else
			cout << s << endl;
	}
}