#include <bits/stdc++.h>
using namespace std;
bool isdig(int i,int d);
int main()
{
	int a,b,d,i,j,T,srt,sq,cnt,freq,flag,tmp;
	int prm[100001][11]={0};
	for(i=0;i<=100000;i++)
		for(j=0;j<=10;j++)
			cout << prm[i][j] << endl ;
	for(i=2;i<=sqrt(100000);i++)
	{
		if(!prm[i][10])
		{
			sq = i*i;
			for(j=sq;j<=100000;j+=sq)
				prm[j][10] = 1;
		}
	}
	for(i=1;i<=100000;i++)
	{
		if(!prm[i][10])
		{
			tmp = i;
			while(tmp!=0)
			{
				prm[i][tmp%10] = 1;
				tmp = tmp/10;
			}
			for(j=0;j<=9;j++)
			{
				prm[i][j]+=prm[i-1][j];
			}
		}
		else
			for(j=0;j<=9;j++)
				prm[i][j] = prm[i-1][j];
	}
	cin >> T;
	while(T--)
	{
		cnt = 0;
		cin >> a >> b >> d;
		cnt = prm[b][d]-prm[a-1][d];
		cout << cnt<< endl;
	}
	return 0;
}