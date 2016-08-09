#include <bits/stdc++.h>
using namespace std;
bool setx[101][100002];
int subset(int a[],int sum,int n);
int main()
{
	int T,i,j,n,sum,res;
	cin >> T;
	while(T--)
	{
		cin >> n;
		sum = 0;
		res = 0;
		int a[n];
		for(i=0;i<n;i++){
			cin >> a[i];
			sum+=a[i];
		}
		for(i=0;i<=n;i++)
			setx[i][0]=true;
		for(i=1;i<=sum;i++)
			setx[0][i]= false;
		subset(a,sum,n);
		for(i=1;i<=n;i++){
			for(j=1;j<=sum;j++){
				if(setx[i][j] ^ setx[i-1][j] == true)
					res+=j;
			}
		}
		cout << res << endl;
	}
	return 0;
}
int subset(int a[],int sum,int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			setx[i][j] = setx[i-1][j];
			if(j>=a[i-1])
				setx[i][j] = setx[i][j] || setx[i-1][j-a[i-1]];
		}
	}
	return 0;
}
