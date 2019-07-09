#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    freopen("stringconstruction.inp", "r", stdin);
    freopen("stringconstruction.out", "w", stdout);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int d[200]={0};
        string s;
        cin>>s;
        int ans=0;
        for (int j = 0; j < s.length(); j++)
        {
                if(d[s[j]]==0)
                {
                    d[s[j]]++;
                    ans++;
                }
        }
        cout<<ans<<endl;
    }
}
