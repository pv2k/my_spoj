#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	map<int,int>mp;
	int T,i,n;
	int a[1000001],cnt=1;
	for(i=0;i<=1000000;i++){
		a[i]=0;
	}
	mp[1] = 1;
	for(i=2;i<=100;i++)
	{
		if(!a[i])
		{
			cnt++;
			ll k = i*i*i;
			if(k>1000000)
				break;
			for(int j=k;j<=1000000;j+=k)
			{
				a[j]=1;
				mp[j] = -1;
			}
			mp[i]=cnt;
		}
	}	
	for(int i=101;i<=1000000;i++)
	{
		if(a[i]==0){
			cnt++;
			mp[i] = cnt;
		}
	}
	cin >> T;
	for(i=1;i<=T;i++)
	{
		cin >> n;
		if(mp[n]!=-1)
			cout << "Case " << i << ": " << mp[n]<<endl;
		else
			cout << "Case " << i << ": " << "Not Cube Free" << endl;
	}
	return 0;
}
