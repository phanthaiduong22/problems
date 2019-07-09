#include <iostream>
#include <string>

using namespace std;
int d[200];
int main()
{
    freopen("makinganagram.inp", "r", stdin);
    freopen("makinganagram.out", "w", stdout);
    int ans = 0;
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++)
        d[s1[i]]++;
    for (int i = 0; i < s2.length(); i++)
        if (d[s2[i]] == 0)
            ans++;
        else
        {
            d[s2[i]]--;
        }
    cout << ans + (s1.length() - (s2.length() - ans));
}