#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
	ios::sync_with_stdio(false);
	unordered_map<ll,int>mp;
	int n,i,j,k,res=0,tmp1,tmp2,tmp3;
	ll var;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				if(a[k]==0)
					continue;
				tmp1=a[i];tmp2=a[j];tmp3=a[k];
				var=(tmp1+tmp2)*tmp3;
				mp[var]+=1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				tmp1=a[i];tmp2=a[j];tmp3=a[k];
				var=((tmp1*tmp3)+tmp2);
				res+=mp[var];
			}
		}
	}
	printf("%d\n",res);
	return 0;
}