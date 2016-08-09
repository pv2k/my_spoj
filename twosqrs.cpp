#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int c,i,j,srt,flag,var,a[1000001];
	ll n,tmp;
	for(i=0;i<=1000000;i++)
		a[i] = 1;
	for(i=2;i<=1000000;i++)
	{
		if(a[i]==1){
			for(j=2*i;j<=1000000;j+=i)
				a[j]=0;
		}
	}
	cin >> c;
	while(c--)
	{
		flag=1;
		cin >> n;
		srt = sqrt(n);
		if(srt*srt==n)
			cout << "Yes" << endl;
		else
		{
			cout << a[srt] << endl;
			for(i=srt;i>=0;i--)
			{
				tmp = n-a[i];
				// cout << a[i] <<' ' << tmp<< endl;
				if(tmp>a[i])
				{
					flag=0;
					break;
				}
				var = sqrt(tmp);
				if(var*var==tmp)
				{
					cout << "Yes" << endl;
					break;
				}
			}
			if(flag==0)
				cout << "No" << endl;
		}
	}
	return 0;
}