#include <iostream>
#include <string>
using namespace std;
long long d[20000000];
int main()
{
    freopen("weight.inp", "r", stdin);
    freopen("weight.out", "w", stdout);
    string s;
    cin >> s;
    d[s[0] - 'a' + 1]++;
    long long temp = 0, x, n;
    for (long long i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            temp += s[i] - 'a' + 1;
            d[temp]++;
        }
        else
        {
            d[s[i] - 'a' + 1]++;
            temp = s[i]-'a'+1   ;
        }
    }
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> x;
        if (d[x] > 0)
            cout << "Yes" << endl;
        else
        {
            cout << "No" << endl;
        }
    }
}