#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<float,int>mp;
	int N,i,j,res=0,k,l;
	string str;
	cin >> N;
	mp[0.5]=0;mp[0.25]=0;mp[0.75]=0;
	for(i=0;i<N;i++)
	{
		cin >> str;
		if(str[2]=='2')
			mp[0.5]++;
		else if(str[0]=='3')
			mp[0.75]++;
		else
			mp[0.25]++;
	}
	k=mp[0.25];l=mp[0.75];
	res=mp[0.5]/2;
	mp[0.5]=mp[0.5]%2;
	if(l>=k)
	{
		res=res+(k);
		l=l-k;
		res+=l;
		if(mp[0.5]==1)
			res+=1;
	}
	else
	{
		res+=l;
		k=k-l;
		if(mp[0.5]==1)
		{
			res+=1;
			k-=2;
			if(k<0)
				k=0;
		}
		if(k>0)
			res+=(k/4)+1;
	}
	cout << res+1 << endl;
	return 0;
}