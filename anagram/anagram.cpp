#include <iostream>
#include <string>
#include <array>
using namespace std;
int main()
{
    freopen("anagram.inp", "r", stdin);
    freopen("anagram.out", "w", stdout);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        array<int,200>d;
        d.fill(0);
        int ans = 0;
        cin>>s;
        int l = s.length();
        if (l % 2 == 1)
            cout << -1 << endl;
        else
        {
            for (int j = 0; j < l; j++)
            {
                if (j < l / 2)
                    d[s[j]]++;
                else
                {
                    if (d[s[j]] == 0)
                        ans++;
                    else
                    {
                        d[s[j]]--;
                    }
                }
            }
            cout << ans << endl;
        }
    }
}