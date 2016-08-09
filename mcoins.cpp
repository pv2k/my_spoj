#include <bits/stdc++.h>
using namespace std;
int con(int n,int dp[],int k,int l);
int main()
{
	int k,l,m,i;
	cin >> k >> l >> m;
	int a[m],dp[1000004]; // 0 for A,1 for B;
	for(i=0;i<1000004;i++)
		dp[i]=-1;
	dp[1]=0;dp[k]=0;dp[l]=0;
	for(i=0;i<m;i++)
		cin >> a[i];
	for(i=0;i<m;i++)
	{
		int tmp=con(a[i],dp,k,l);
		if(tmp==0)
			cout << "A";
		else
			cout << "B";
	}
	cout << endl;
	return 0;
}
int con(int n,int dp[],int k,int l)
{
	if(dp[n]!=-1)
		return dp[n];
	int tmp1,tmp2,tmp3;
	if(n-k>0)
		tmp1=con(n-k,dp,k,l);
	if(tmp1==1)
	{
		dp[n]=0;
		return dp[n];
	}
	if(n-l>0)
		tmp2=con(n-l,dp,k,l);
	if(tmp2==1)
	{
		dp[n]=0;
		return dp[n];
	}
	tmp3=con(n-1,dp,k,l);
	if(tmp3==1)
		dp[n]=0;
	else
		dp[n]=1;
	return dp[n];
}