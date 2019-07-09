#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    freopen("funnystring.inp","r",stdin);
    freopen("funnystring.out","w",stdout);
    string s;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int ans=1;
        cin>>s;
        for(int i=1;i<s.length()/2+1;i++)
        {
            if(abs(s[i]-s[i-1])!=abs(s[s.length()-1-i]-s[s.length()-i]))
            {
                ans=0;
                break;
            }
        }
        if(ans==1)
        cout<<"Funny"<<endl;
        else
        {
            cout<<"Not Funny"<<endl;
        }
    }
}

