#include <bits/stdc++.h>
using namespace std;
const int len = 150;
int main()
{
	ios::sync_with_stdio(false);
	int t,i,j,h,v;
	long int min;
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
			min = len;
			if(j>0 && res[i-1][j-1]<min)
				min = res[i-1][j-1];
			if(j<v-1 && res[i-1][j+1]<min)
				min = res[i-1][j+1];
			if(res[i-1][j]<min)
				min = res[i-1][j];
			res[i][j] = min + a[i][j];
		}
	}
	min =len;
	for(j=0;j<v;j++)
		if(res[h-1][j]<min)
			min = res[h-1][j];
	cout << min << endl;
	return 0;
}