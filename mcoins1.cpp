#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k,l,m,i,j;
	cin >> k >> l >> m;
	int a[m],dp[1000020],idx[3]; // 0 for A,1 for B;
	for(i=0;i<1000020;i++)
		dp[i]=-1;
	idx[0]=1;idx[1]=k;idx[2]=l;
	dp[k]=0;dp[l]=0;dp[1]=0;
	for(i=1;i<1000020-k || i<1000020-l;i++)
	{
		if(dp[i]==0){
			for(j=0;j<3;j++){
				if(dp[i+idx[j]]!=0){
					// cout << i << " 1 " <<i+idx[j] << endl;
					dp[i+idx[j]]=1;
				}
			}
		}
		else if(dp[i]==1){
			for(j=0;j<3;j++){
				// cout <<  i << " 2 " << i+idx[j] << endl;
				dp[i+idx[j]]=0;
			}
		}
	}
	// for(i=0;i<10;i++)
		// cout << dp[i] << endl;
	for(i=0;i<m;i++)
		cin >> a[i];
	for(i=0;i<m;i++)
	{
		if(dp[a[i]]==0)
			cout << "A";
		else
			cout << "B";
	}
	cout << endl;
	return 0;
}