#include <bits/stdc++.h>
using namespace std;
vector<int> primes;
void simplsiev(long long int);
void segsiev(bool a[],long long int,long long int);
int main()
{
	int T,i,j;
	long long int m,n;
	cin >> T;
	while(T--)
	{
		primes.clear();
		cin >> m >> n;
		simplsiev(sqrt(n));
		bool vis[n-m+1];
		memset(vis,false,sizeof(vis));
		segsiev(vis,m,n);
		if(m==1)
			vis[m-1] = true;
		for(i=m;i<=n;i++)
		{
			if(!vis[i-m])
				cout << i << endl;
		}
		cout << endl;
	}
	return 0;
}
void simplsiev(long long int limit)
{
	long long int i,j;
	bool visted[limit+1];
	memset(visted,false,sizeof(visted));
	// cout << limit << endl;
	for(i=2;i<=limit;i++)
	{
		if(!visted[i])
		{
			// cout << i << endl;
			for(j=2*i;j<=limit;j+=i)
				visted[j]=true;
		}
	}
	for(i=2;i<=limit;i++)
		if(!visted[i]){
			// cout << i << endl;
			primes.push_back(i);
		}
}
void segsiev(bool vis[],long long int a,long long int b)
{
	long long int val_idx,i,j;
	for(i=0;i<primes.size();i++)
	{
			val_idx = floor((a)/primes[i])*primes[i];
			// cout << val_idx << " "  << primes[i] << endl;
			if(val_idx<a)
				val_idx+=primes[i];
			if(val_idx==primes[i])
				val_idx+=primes[i];
			for(j=val_idx;j<=b;j+=primes[i])
			{
				// cout << j << endl;
				vis[j-a] = true;
			}
	}
}