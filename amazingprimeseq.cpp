#include <bits/stdc++.h>
using namespace std;
const int max = 10000000;
bool a[10000001];
long long int ax[10000001];
int prm[10000001];
void sieve();
void primeseq();
int main()
{
	memset(a,false,sizeof(a));
	int T,i,j,n;
	for(i=0;i<=10000000;i++)
		prm[i]=-1;
	sieve();
	primeseq();
	cin >> T;
	while(T--)
	{
		cin >> n;
		cout << ax[n] << endl;
	}
	return 0;
}
void sieve()
{
	int i,j;
	for(i=2;i<=10000000;i++)
	{
		if(!a[i])
		{
			// cout <<i<< ' ';
			for(j=2*i;j<=10000000;j+=i){
				if(prm[j]==-1)
					prm[j] = i;
				a[j]=true;
			}
			prm[i] = i;
		}
	}
	// cout << endl;
}
void primeseq()
{
	int i,j;
	ax[0] = 0;
	ax[1] = 0;
	for(i=2;i<=10000000;i++)
	{
		ax[i] = ax[i-1] + prm[i];
	}
}