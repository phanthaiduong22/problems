#include <iostream>
#include <string>

using namespace std;

int main()
{
    freopen("theloveletter.inp","r",stdin);
    freopen("theloveletter.out","w",stdout);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        int l=s.length(),ans=0;
        for(int i=0;i<l/2;i++)
        {
            ans+=abs(s[i]-s[l-i-1]);
        }
        cout<<ans<<endl;
    }
}