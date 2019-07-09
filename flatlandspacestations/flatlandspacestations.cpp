#include <iostream>
#include <cmath>
#define MAX 100001
using namespace std;
int d[MAX], dd[MAX],a[MAX];
int main()
{
	freopen("flatlandspacestations.inp", "r", stdin);
	freopen("flatlandspacestations.out", "w", stdout);
	int n, k,m, max=0;
	cin >> n >> m;
	for (int i = 0; i <m; i++)
	{
		cin >> a[i];
		d[a[i]]++;
	}
	k = 0;
	int e =0;
	for (int i = 0; i < n; i++)
	{
		
		if (d[i] == 1)
		{
			k = 0;
			dd[i] = k;
			e = 1;
		}
		else if(e==1)
		{
			k++;
			dd[i] = k;
		}
		if (e == 0)
		{
			dd[i] = n;
			
		}
	}
	/*for (int i = 0; i < n; i++)
		cout << dd[i] << " ";*/
	k = 0;
	e = 0;
	for (int i = n-1; i >= 0; i--)
	{
		if (d[i] == 1)
		{
			k = 0;
			dd[i] = k;
			e = 1;
		}
		else if (e == 1)
		{
			k++;
			if (k < dd[i])
				dd[i] = k;
		}

		if ((dd[i] > max) && (dd[i] != 0) && (dd[i] != n))
			max = dd[i];
	}
	//for (int i = 0; i < n; i++)
	//	cout << dd[i] << " ";
	cout << max;
}