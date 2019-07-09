#include <iostream>
#include <string>
using namespace std;

int main()
{
	freopen("password.txt", "w", stdout);
	string s;
	for (int q = 0; q < 5; q++)
	{
		s = "BT      ";
		s[2] = char(q+65);
		for (int w = 15; w < 26; w++)
		{
			s[3]= char(w + 65);
			for (int e = 15; e < 26; e++)
			{
				s[4]= char(e + 65);
				for (int r = 0; r < 26; r++)
				{
					s[5] = char(r + 65);
					for (int t = 15; t < 26; t++)
					{
						s[6] = char(t + 65);
						for (int y = 0; y < 5; y++)
						{
							s[7] = char(y + 65);
							cout << s<<endl;
						}
					}
				}
			}
		}
	}
}