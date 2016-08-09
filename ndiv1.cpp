#include <bits/stdc++.h>
using namespace std;
vector<int> primes;
vector<int> pq;
long long int cnt;
void simplsiev(long long int);
void segsiev(bool a[],long long int,long long int);
int main()
{
	long long int a,b,i,j,n,k,freq=0,res,srt; 
	cin >> a >> b >> n;
	cnt=0;
	srt = b/2;
	bool vis[b-a+1];
	memset(vis,false,sizeof(vis));
	simplsiev(srt);
	segsiev(vis,a,b);
	if(a==1)
		vis[a-1]=true;
	// cout << primes.size() << endl;
	if(n==1)
		cout << "1" << endl;
	else
	{
		for(j=a;j<=b;j++)
		{
			i=j;
			if(n==2)
			{
				if(!vis[j-a]){
					// cout << j << endl;
					freq++;
				}
			}
			else
			{
				if(!vis[j-a])
					continue;
				else
				{
					res=1;
					for(k=0;k<primes.size();k++)
					{
						i = j;
						if(i%primes[k]==0)
						{
							cnt=0;
							// cout << i << " " << primes[k] << endl;
							while((i%primes[k]==0) && i!=0)
							{
								// cout << i << " " << primes[k] << endl;
								cnt++;
								// cout << "a";
								i=i/primes[k];

							}
							// cout << cnt << endl;
						res=res*(cnt+1);
						// if(i%primes[k]!=0 && !vis[i-a] && i>srt+1)
						// {
						// 	cnt=1;
						// 	res=res*(cnt+1);
						// }
						// if(j==50)
						// 	cout << res << endl;
						}
						// if(j==50)
						// 	cout << res << endl;
					}
					if(res==n){
						// cout << j << endl;
						freq++;
					}
				}
			}

		}
		cout << freq << endl;
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
