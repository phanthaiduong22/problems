#include <iostream>
#include <string>
using namespace std;
// bool compare(string x, string y)
// {
// 	if (x.length() > y.length())
// 		return 1;
// 	else if (x.length() < y.length())
// 			return 0;
// 	else
// 	{
// 		int i = 0;
// 		while (x[i] == y[i]);
// 		{
// 			i++;
// 		}
// 		if (x[i] > y[i])
// 			return 1;
// 		else
// 			return 0;
// 	}
// 	return 0;
// }
// void insertionSort(string s[], int n)
// {
// 	string key;
// 	int i,  j;
// 	for (i = 1; i < n; i++)
// 	{
// 		key = s[i];
// 		j = i - 1;
// 		while (j >= 0 && compare(s[j],key))
// 		{
// 			s[j + 1] = s[j];B
// 			j = j - 1;
// 		}
// 		s[j + 1] = key;
// 	}
// }
int main()
{
	int n;
	string s[2000001];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> s[i];
	// insertionSort(s, n);
	for (int i = 0; i < n; i++)
		cout << s[i] << endl;
	
}