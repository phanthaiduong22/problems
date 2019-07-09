#include <iostream>
#include <string>
using namespace std;

int main()
{
    freopen("strongpassword.inp", "r", stdin);
    freopen("strongpassword.out", "w", stdout);
    string s;
    int n, ans, a = 0, b = 0, c = 0, d = 0;
    ans = 0;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] <= '9' && s[i] >= '0')
        {
            a++;
        }
        else if (s[i] <= 'z' && s[i] >= 'a')
        {
            b++;
        }
        else if (s[i] <= 'Z' && s[i] >= 'A')
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    if (a == 0)
        ans += 1;
    if (b == 0)
        ans += 1;
    if (c == 0)
        ans += 1;
    if (d == 0)
        ans += 1;
    if (ans < 6-n)
        cout << 6-n;
    else
    {
        cout << ans;
    }
}