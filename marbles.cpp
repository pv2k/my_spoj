#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
ll ncr(int,int);
int main()
{
	int T,i,j,n,k;
	ll res;
	cin >> T;
	while(T--)
	{
		res=0;
		cin >> n >> k;
		k=n-k;n=n-1;
		if(k>0)
			res+=ncr(n-1,k-1);
		res+=ncr(n-1,k);
		cout << res << endl;
	}
	return 0;
}
ll ncr(int n,int k)
{
	ll res=1;
	if(k>n-k)
		k=n-k;
	for(int i=0;i<k;i++)
	{
		res*=(n-i);
		res/=(i+1);
	}
	return res;
}