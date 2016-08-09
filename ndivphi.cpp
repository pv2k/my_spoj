#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int A[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
bool isprime(ll);
ll pwer(ll a,ll b,ll mod);
ll expo(ll a, ll b,ll mod);
int main()
{
	int T,cnt;
	ll N,i,j;
	cin >> T;
	while(T--)
	{
		cnt=2;
		ll res =1;
		cin >> N;
		for(i=N;i>=2;i--){
			if(cnt==0)
				break;
			if(isprime(i) && cnt!=0){
				res*=i;
				--cnt;
			}
		}
		cout << res << endl;
		
	}
	return 0;
}
bool isprime(ll n)
{
	if(n==2 || n==3)
		return true;
	if(n%2==0)
		return false;
	ll d = n-1;
	for(int i=0;i<25;i++)
	{
		if(A[i]==n)
			return true;
		else if(n%A[i]==0)
			return false;
	}
	int freq=0;
	while(d%2==0){
		d=d/2;
		freq++;
	}
	for(int i=0;i<3;i++)
	{
		int flag=0;
		ll a = 1+(rand()%(n-1));
		ll pwr = expo(a,d,n);
		if(pwr == 1 || pwr==n-1)
			continue;
		for(int j=1;j<freq;j++)
		{
			pwr = pwer(pwr,pwr,n);
			if(pwr==1)
				return false;
			if(pwr==n-1){
				flag = 1;
				break;
			}
		}
		if(flag==1)
			continue;
		return false;
	}
	return true;
}
ll pwer(ll a,ll b,ll mod){
    a%=mod;b%=mod;
	long double res=a;
	res*=b;
	ll c=(ll)(res/mod);
	a*=b;
	a-=c*mod;
	a%=mod;
	if(a<0)a+=mod;
	return a;
}
ll expo(ll a, ll b,ll mod)
{
    ll result=1; 
	while(b)
	{
		if(b&1)result=pwer(result,a,mod);
		a=pwer(a,a,mod);
		b>>=1;
	}
	return result;
}