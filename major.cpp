#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	map<int,int>mp;
	int t,i,j,n,x,flag;
	cin >> t;
	while(t--)
	{
		mp.clear();
		flag=0;
		cin >> n;
		int a[n];
		for(i=0;i<n;i++){
			cin >> x; 
			mp[x] = mp[x]+1;
		}
		for(i=-1000;i<=1000;i++)
			if(mp[i]>(n/2))
			{
				flag=1;
				cout << "YES " << i << endl;
				break;
			}
		if(flag==0)
			cout << "NO" << endl;
	}
	return 0;
}