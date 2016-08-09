#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const long long int mod = 1000000007;
ll fib(ll);
ll power(ll f[2][2],ll m);
ll multiply(ll f[2][2],ll m[2][2]);
int main()
{
	int T,i,j;
	ll x,y;
	cin >> T;
	while(T--)
	{
		cin >> x >> y;
		 ll res1 = fib(y);
		 ll res2 = fib(x);
		 cout << res1-res2 << endl;
	}
	return 0;
}
ll fib(ll m)
{
	ll f[2][2] = {{1,1},{1,0}};
	if(m==0)
		return 0;
	power(f,m-1);
	return f[0][0];
}
ll power(ll f[2][2],ll m)
{
	if(m==0||m==1)
		return 0;
	ll M[2][2] = {{1,1},{1,0}};
	power(f,m/2);
    multiply(f,f);
  	if (m%2 != 0)
    	multiply(f, M);
    return 0;
}
ll multiply(ll F[2][2], ll M[2][2])
{
  ll x =  (((F[0][0]%mod)*(M[0][0]%mod))%mod + ((F[0][1]%mod)*(M[1][0]%mod))%mod)%mod;
  ll y =  (((F[0][0]%mod)*(M[0][1]%mod))%mod + ((F[0][1]%mod)*(M[1][1]%mod))%mod)%mod;
  ll z =  (((F[1][0]%mod)*(M[0][0]%mod))%mod + ((F[1][1]%mod)*(M[1][0]%mod))%mod)%mod;
  ll w =  (((F[1][0]%mod)*(M[0][1]%mod))%mod + ((F[1][1]%mod)*(M[1][1]%mod))%mod)%mod;
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}