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
            if(s[j]!=s[l-j-1])
            {
                if((s[j]==s[l-j-2])&&(s[j+1]==s[l-j-3]))
                {
                    cout<<l-j-1<<endl;
                    goto jump;
                }
                else if((s[j+1]==s[l-j-1])&&(s[j+2]==s[l-1-j-1]))
                {
                    cout<<j<<endl;
                    goto jump;
                }
            }
            
        } 
        cout<<-1<<endl;
        jump:;
    }
    return 0;
}