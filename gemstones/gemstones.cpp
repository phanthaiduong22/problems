#include <iostream>
#include <string>
using namespace std;
int d[200];
int main()
{
    freopen("gemstones.inp","r",stdin);
    freopen("gemstone.out","w",stdout);
    int n, ans;
    string s;   
    ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < s.length(); j++)
        {
            if(d[s[j]]==i)
                d[s[j]]++;
            if (i == n - 1 && d[s[j]] == n)
            {
                ans++;
                d[s[j]]++;
            }
        }
    }
    cout << ans;
}