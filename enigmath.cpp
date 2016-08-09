#include <iostream>
using namespace std;
#define ll long long int
ll gcd(ll x,ll y);
int main()
{
	int t,i;
	ll x,y,z;
	cin >> t;
	while(t--)
	{
		cin >> x >> y;
		z = gcd(x,y);
		cout << y/z <<' '<< x/z << endl;
	}
	return 0;
}
ll gcd(ll x,ll y)
{
	if(x==0)
		return y;
	return gcd(y%x,x);
}