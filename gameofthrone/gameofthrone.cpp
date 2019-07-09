#include <iostream>
#include <string>

using namespace std;
int d[200];
int main()
{
    freopen("gameofthrone.inp","r",stdin);
    freopen("gameofthrone.out","w",stdout);
    string s;
    cin>>s;
    int ans=0;
    for (int i = 0; i < s.length(); i++)
    {
        d[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
        if (d[i] % 2 != 0)
            ans++;
    if (ans > 1)
        cout << "NO" << endl;
    else
    {
        cout << "YES";
    }
}