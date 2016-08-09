#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int t,i,j,h,v;
	long int max;
	cin >> t;
	while(t--)
	{
		cin >> h >> v;
		int a[h][v],res[h][v];
		for(i=0;i<h;i++)
			for(j=0;j<v;j++)
				cin >> a[i][j];
		for(i=0;i<v;i++)
			res[0][i] = a[0][i];
		for(i=1;i<h;i++)
		{
			for(j=0;j<v;j++)
			{
				max = -1;
				if(j>0 && res[i-1][j-1]>max)
					max = res[i-1][j-1];
				if(j<v-1 && res[i-1][j+1]>max)
					max = res[i-1][j+1];
				if(res[i-1][j]>max)
					max = res[i-1][j];
				res[i][j] = max + a[i][j];
			}
		}
		max =-1;
		for(j=0;j<v;j++)
			if(res[h-1][j]>max)
				max = res[h-1][j];
		cout << max << endl;
	}
	return 0;
}