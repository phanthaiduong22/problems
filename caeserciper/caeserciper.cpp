#include <iostream>
#include <string>

using namespace std;

int main()
{
    freopen("caeserciper.inp", "r", stdin);
    freopen("caeserciper.out", "w", stdout);
    int n, k;
    string s;
    cin >> n >> s >> k;
    k = k % 26;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (s[i] + k > 'z')
            {
                int temp = 'z' - s[i];
                cout << char('a' + (k - temp) - 1);
            }
            else
            {
                cout << char(s[i] + k);
            }
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            if (s[i] + k > 'Z')
            {
                int temp = 'Z' - s[i];
                cout << char('A' + (k-temp)- 1);
            }
            else
            {
                cout << char(s[i] + k);
            }
        }
        else
            cout << s[i];
    }
}