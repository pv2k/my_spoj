#include <bits/stdc++.h>
using namespace std;
const int maxm = 1000000;
bool a[1000001];
long long int fat[1000001],ax[1000001];

void sieve()
{
	int i,j,k,cnt;
	for(i=2;i<=maxm;i++)
	{
		if(!a[i])
		{
			for(j=2*i;j<=maxm;j+=i){
				k = j;
				cnt = 0;
				while(k%i==0)
				{
					cnt++;
					k=k/i;
				}
				fat[j] = fat[j]*((pow(i,cnt+1)-1)/(i-1));
				a[j] =true;
			}
			fat[i] = fat[i]+i;
		}
	}
}
void afs()
{
	ax[0]=0;ax[1] = 0;
	for(int i=2;i<=maxm;i++)
	{
		ax[i]=ax[i-1]+(fat[i]-i);
	}
}
int main()
{
	int i,j,T,n;
	memset(a,false,sizeof(a));
	for(i=0;i<=maxm;i++)
		fat[i]=1;
	sieve();
	// for(i=0;i<=10;i++)
	// 	cout << fat[i] << endl;
	afs();
	cin >> T;
	while(T--)
	{
		cin >> n;
		cout << ax[n] << endl;
	}
	return 0;
}