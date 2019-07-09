#include <iostream>
#include <string>
using namespace std;

int main()
{
    freopen("palindrome.inp", "r", stdin);
    freopen("palindrome.out", "w", stdout);
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        string s;
        int ans=-1;
        cin >> s;
        int l = s.length(),a=0,b=0;
        for (int j = 0; j < l/2; j++)
        {
            if((s[j]!=s[l-j-1])&&(a==0)&&(b==0))
            {
                if(s[j]==s[l-j-2])
                {
                    ans=l-j-1;
                    b=1;
                    s.erase(s.begin()+l-j-1);
                }
                else if(s[j+1]==s[l-j-1])
                {
                    ans=j;
                    a=1;
                    b=1;
                    s.erase(s.begin()+j);
                }
                else
                {
                    ans=-1;
                    break;
                }
            }
            if(s[j+a]!=s[l-b-1])
            {
                ans=-1;
                break;
            }
        } 
        cout<<ans<<endl;
    }
}