#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[6][6],i,j,b[10],tmp=0;
	long long int res=0;
	for(i=1;i<6;i++)
		for(j=1;j<6;j++)
			cin >> a[i][j];
	for(i=1;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			b[tmp] = a[i][j]+a[j][i];
			tmp++;
		}
	}
	sort(b,b+tmp);
	res = 2*b[tmp-1];
	for(i=0;i<tmp;i++){
		cout << b[i] << endl;
		res+=b[i];
	}
	// cout << res << endl;
	return 0;
}