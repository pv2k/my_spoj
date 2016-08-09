#include <bits/stdc++.h>
using namespace std;
// int gcd(int a,int b);
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T,i,j,k,x,y,a[1000001],b[1000001],cnt,res;
	memset(a,0,sizeof(a));
	for(i=1;i<=1000000;i++)
		b[i]=1;
	for(i=2;i<=1000000;i++)
	{
		if(a[i]==0)
		{
			for(j=2*i;j<=1000000;j+=i){
				cnt=0;
				a[j]=1;
				k = j;
				while(k%i==0)
				{
					cnt++;
					k=k/i;
				}
				// cout << b[j] << endl;
				b[j] = b[j]*(cnt+1);
			}
			b[i] = 2;
		}
	}
	// for(i=2;i<=10;i++)
	// 	cout << b[i] << endl;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&x,&y);
		res = std::__gcd(x,y);
		printf("%d\n",b[res]);
	}
	return 0;
}
// int gcd(int a,int b)
// {
// 	if(a==0)
// 		return b;
// 	return gcd(b%a,a);
// }