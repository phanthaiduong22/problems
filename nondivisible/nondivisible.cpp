#include <iostream>
#include <vector>
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b);
using namespace std;

int main()
{
    freopen("nondivisible.inp", "r", stdin);
    freopen("nondivisible.out", "w", stdout);
    long long n, k, x;
    long long ans = 0;
    vector<long long> d(105, 0);
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        d[x % k]++;
    }
    if (k == 1)
    {
        cout << 1;
    }
    else
    {
        for (int i = 0; i <= k / 2; i++)
        {
            if ((i != k - i)&&(i!=0))
            {
                if (d[i] > d[k - i])
                    ans += d[i];
                else
                {
                    ans += d[k - i];
                }
            }
            else if(d[i]>0)
            {
                ans+=1;
            }
            
        }
        cout << ans;
    }
}