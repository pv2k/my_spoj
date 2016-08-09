#include <bits/stdc++.h>
using namespace std;
vector<int> primes;
int cnt;
void simplsiev(int);
void segsieve(long long int);
int main()
{
	long long int n; 
	int i,j;
	cin >> n;
	cnt=0;
	segsieve(n);
	cout << primes.size()+cnt << endl;
	for(i=0;i<primes.size();i++)
		cout << primes[i] << ' ';
	cout << endl;
	return 0;
}
void segsieve(long long int n)
{
	int i,j;
	int limit = floor(sqrt(n))+1;
	simplsiev(limit);
	long long int low,hi,val_idx;
	low = limit;hi = 2*limit;
	while(low<n)
	{
		bool visted[limit+1];
		memset(visted,false,sizeof(visted));
		for(i=0;i<primes.size();i++)
		{
			val_idx = floor(low/primes[i])*primes[i];
			if(val_idx<low)
				val_idx+=primes[i];
				// cout << val_idx << ' ' << limit << ' ' << primes[i] << endl;
			for(j=val_idx;j<hi;j+=primes[i])
				visted[j-low] = true;
		}
		for(i=low;i<hi;i++)
		{
			if(!visted[i-low]){
				// primes.push_back(i);
				cnt++;
			}
		}
		low=low+limit;
		hi=hi+limit;
		if(hi>n)
			hi=n;
	}
}
void simplsiev(int limit)
{
	int i,j;
	bool visted[limit+1];
	memset(visted,false,sizeof(visted));
	for(i=2;i*i<limit;i++)
	{
		if(!visted[i])
		{
			for(j=2*i;j<limit;j+=i)
				visted[j]=true;
		}
	}
	for(i=2;i<limit;i++)
		if(!visted[i]){
			// cout << i << endl;
			primes.push_back(i);
		}
}
