#include <iostream>
#include <string>
using namespace std;
int d[30];
int main()
{
    freopen("pangrams.inp", "r", stdin);
    freopen("pangrams.out", "w", stdout);
    string s;
    int ans=1;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a')
            d[s[i] - 'a']++;
        else
        {
            d[s[i] - 'A']++;
        }
    }
    for (int i = 0; i < 26; i++)
        if (d[i] == 0)
        {

            ans = 0;
            break;
        }
    if (ans == 1)
        cout << "pangram";
    else
    {
        cout << "not pangram";
    }
}