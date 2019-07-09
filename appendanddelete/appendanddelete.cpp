#include <iostream>
#include <string>

using namespace std;

int main()
{
    freopen("appendanddelete.inp", "r", stdin);
    freopen("appendanddelete.out", "w", stdout);
    string s, s1;
    int n;
    int ans = 0, i = 0,k;
    cin >> s >> s1;
    cin >> n;
    while (s[i] == s1[i])
    {
        i++;
        if(i==s.length())
            break;
    }
    ans=s.length() + s1.length() - 2 * i;
    k=s.length() + s1.length();
    if (((ans <= n)&&(ans%2==n%2))||(ans==0)||((k<n)&&ans<n))
        cout<<"Yes"<<endl;
    else
    {
        cout << "No" << endl;
    }
}