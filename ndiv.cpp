#include <bits/stdc++.h>
using namespace std;
vector<int> primes;
vector<int> pq;
int cnt;
void simplsiev(int);
void segsiev(bool a[],int,int);
int main()
{
	long long int a,b,i,j,n,k,freq=0,res; 
	cin >> a >> b >> n;
	cnt=0;
	bool vis[b-a+1];
	memset(vis,false,sizeof(vis));
	simplsiev(sqrt(b));
	// segsiev(vis,a,b);
	if(a==1)
		vis[a-1]=true;
	// cout << primes.size() << endl;
	if(n==1)
		cout << "1" << endl;
	else
	{
		for(i=a;i<=b;i++)
		{
			j=i;
			res=1;
			for(k=0;k<primes.size();k++)
			{
				if(j%primes[k])
				{
					cnt=0;
					while(j%primes[k])
					{
						cnt++;
						j=j/primes[k];
					}
				}
				res=res*(cnt+1);
			}
			if(res==n)
				freq++;
		}
		cout << freq << endl;
	}
	return 0;
}
void simplsiev(int limit)
{
	int i,j;
	bool visted[limit+1];
	memset(visted,false,sizeof(visted));
	// cout << limit << endl;
	for(i=2;i<=limit;i++)
	{
		if(!visted[i])
		{
			// cout << i << endl;
			for(j=2*i;j<limit;j+=i)
				visted[j]=true;
		}
	}
	for(i=2;i<=limit;i++)
		if(!visted[i]){
			// cout << i << endl;
			primes.push_back(i);
		}
}
void segsiev(bool vis[],int a,int b)
{
	long long int val_idx;
	for(int i=0;i<primes.size();i++)
	{
			val_idx = floor((a)/primes[i])*primes[i];
			// cout << val_idx << " "  << primes[i] << endl;
			if(val_idx<a)
				val_idx+=primes[i];
			if(val_idx==primes[i])
				val_idx+=primes[i];
			for(int j=val_idx;j<=b;j+=primes[i])
			{
				// cout << j << endl;
				vis[j-a] = true;
			}
	}
}
