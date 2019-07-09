#include <iostream>
#include <string>
using namespace std;
int main()
{
    freopen("separatethenumbers.inp", "r", stdin);
    freopen("separatethenumbers.out", "w", stdout);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        int ans = 1, first_n, temp, ans1 = 1;
        cin >> s;
        if (s[0] == 48)
            ans = 0;
        else
        {
            //tim so dau tien
            ans = 0;
            for (int j = 1; j < s.length(); j++)
            {
                if (j > s.length() / 2)
                    break;
                string c = "";
                ans1 = 1;
                for (int k = 0; k < j; k++)
                    c += s[k];
                first_n = stoi(c);
                temp = first_n;
                int e = j;
                while (e < s.length())
                {
                    string c1;
                    temp++;
                    c1 = to_string(temp);
                    int p = 0;
                    while (p < c1.length())
                    {
                        if(e + p >= s.length())
                        {
                            ans1 = 0;
                            break;
                        }
                        if (s[e + p] != c1[p])
                        {
                            ans1 = 0;
                            break;
                        }
                        p++;
                    }
                    e += p;
                    if (ans1 == 0)
                        break;
                }
                if (ans1 == 1)
                {
                    ans = 1;
                    break;
                }
            }
        }
        if (ans == 1)
            cout << "YES"
                 << " " << first_n << endl;
        else
            cout << "NO" << endl;
    }
}