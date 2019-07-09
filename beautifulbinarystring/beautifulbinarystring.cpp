#include <iostream>
#include <string>
using namespace std;

int main()
{
    freopen("beautifulbinarystring.inp", "r", stdin);
    freopen("beautifulbinarystring.out", "w", stdout);
    int n;
    string s;
    cin >> n;
    cin >> s;
    int i = 1, ans = 0;
    while (i < n - 1)
    {
        if (s[i - 1] == '0' && s[i] == '1' && s[i + 1] == '0')
        {
            i = i +3;
            ans++;
        }
        else
        {
            i++;
        }
    }
    cout << ans;
}