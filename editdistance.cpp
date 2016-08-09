#include <bits/stdc++.h>
using namespace std;
int a[2001][2001];
int main()
{
	ios::sync_with_stdio(false);
	int T,i,j,m,n;
	string str1,str2;
	cin >> T;
	while(T--)
	{
		cin >> str1;
		cin >> str2;
		n = str2.size();
		m = str1.size();
		for(i=1;i<=m;i++)
			a[0][i] = i;
		for(i=1;i<=n;i++)
			a[i][0] = i;
		a[0][0] = 0;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				if(str2[i-1]==str1[j-1])
					a[i][j]=a[i-1][j-1];
				else
				{
					a[i][j] = min(a[i-1][j],min(a[i-1][j-1],a[i][j-1]))+1;
				}
			}
		}
		cout << a[n][m] << endl;
	// for(i=0;i<=n;i++){
	// 	for(j=0;j<=m;j++){
	// 		cout << a[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	}
	return 0;
}