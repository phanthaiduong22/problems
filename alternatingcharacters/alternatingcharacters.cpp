#include <iostream>
#include <string>
using namespace std;

int main()
{
    freopen("alternatingcharacters.inp","r",stdin);
    freopen("alternatingcharacters.out","w",stdout);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int ans=0;
        string s;
        cin>>s;
        for(int i=1;i<s.length();i++)
            if(s[i]==s[i-1])
            {
                ans++;
            }
            cout<<ans<<endl;
    }
}