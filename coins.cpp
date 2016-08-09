#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const long long int maxm = 1000;
map<ll,ll> mp;
ll coins(ll n);
int main()
{
	int T,i,j;
	ll N;
	mp[0]=0;mp[1]=1;mp[2]=2;
	// for(i=3;i<=maxm;i++)
	// {
	// 	mp[i] = coins(i);
	// 	cout << mp[i]<< endl;
	// }
	while(cin >> N)
	{
		cout << coins(N) << endl;;
	}
	return 0;
}
ll coins(ll n)
{
	ll sum;
	if(mp[n]!=0 || n==0)
		return mp[n];
	sum = (coins(n/2)+coins(n/3)+coins(n/4));
	if(sum<n){
		sum = n;
	}
	mp[n] = sum;
	// if(n==999)
	// 	cout << sum << endl;
	return sum;
}