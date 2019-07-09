#include <iostream>
#include <string>

using namespace std;

int main()
{
    freopen("super.inp", "r", stdin);
    freopen("super.out", "w", stdout);
    string s;
    cin >> s;
    int i = 0;
    while (i < s.length() - 1)
    {
        if (s[i] == s[i + 1])
        {
            s.erase(i, 2);
            if (i != 0)
                i--;
        }
        else
        {
            i++;
        }
        if(s=="")
            break;  
    }
    if (s == "")
        cout << "Empty String" << endl;
    else
    {
        cout << s;
    }
}