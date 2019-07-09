    #include <iostream>
    #include <string>
    using namespace std;

    int main()
    {
        freopen("hackerrankinstring.inp","r",stdin);
        freopen("hackerrankinstring.out","w",stdout);
        int t;
        cin >> t;
        for (int k = 0; k < t; k++)
        {
            string s;
            int ans=0;
            cin >> s;
            string s1 = "hackerrank";
            int j = 0;
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == s1[j])
                {
                    j++;
                }
                if (j == 10)
                {
                    ans = 1;
                    break;
                }
            }
            if (ans == 1)
                cout << "YES" << endl;
            else
            {
                cout << "NO" << endl;
            }
        }
    }