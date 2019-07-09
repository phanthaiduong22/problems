#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int d[200];
int main()
{
    freopen("twocharacters.inp", "r", stdin);
    freopen("twocharacters.out", "w", stdout);
    string s;
    int n, ans = 0;
    cin >> n;
    cin >> s;
    for (int j = 1; j < 26; j++)
    {
        for (int k = 0; k < j; k++)
        {
            string c = "";
            for (int i = 0; i < s.length(); i++)
            {
                if ((s[i] - 'a' == j) || (s[i] - 'a' == k))
                    c += s[i];
            }
            for (int i = 1; i < c.length(); i++)
                if (c[i] == c[i - 1])
                {
                    c = "";
                    break;
                }
            if (c.length() > ans)
                ans = c.length();
        }
    }
    if (s.length() == 1)
        ans = 0;
    cout << ans;
}
