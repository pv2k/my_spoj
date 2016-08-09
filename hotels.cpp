#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ios::sync_with_stdio(false);
	int i,j,n;
	ll m,maxm=-1,tmp=0;
	cin >> n >> m;
	int cst[n];
	for(i=0;i<n;i++)
		cin >> cst[i];
	j=0;
	for(i=0;i<n;i++)
	{
		while(tmp+cst[i]>m && j<=i)
		{
			tmp = tmp-cst[j];
			j++;
		}
		tmp=tmp+cst[i];
		if(tmp>maxm)
			maxm = tmp;
	}
	cout << maxm << endl;
	return 0;
}