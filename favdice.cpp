#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T,i,j,n;
	cin >> T;
	while(T--)
	{
		float res=0;
		cin >> n;
		for(i=1;i<=n;i++)
			res+=(1.0/i);
		res=res*n;
		printf("%.2f\n",res);
	}	
	return 0;
}