#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int a[9][9] = {2, 9, 4, 7, 5, 3, 6, 1, 8,
                   2, 7, 6, 9, 5, 1, 4, 3, 8,
                   4, 3, 8, 9, 5, 1, 2, 7, 6,
                   6, 7, 2, 1, 5, 9, 8, 3, 4,
                   6, 1, 8, 7, 5, 3, 2, 9, 4,
                   8, 3, 4, 1, 5, 9, 6, 7, 2,
                   8, 1, 6, 3, 5, 7, 4, 9, 2,
                   4, 9, 2, 3, 5, 7, 8, 1, 6};
    int b[9];
    int max=100;
    for(int i=0;i<9;i++)
        cin>>b[i];
    for(int i=0;i<9;i++)
    {
        int ans=0;
        for(int j=0;j<9;j++)
            ans+=abs(a[i][j]-b[j]);
        if(ans<max)
            max=ans;
    }
    cout<<max;
}