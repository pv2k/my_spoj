#include <bits/stdc++.h>
using namespace std;
const long long int maxm=1000000;
#define ll long long int
ll a[maxm];
int main()
{
	ll i,j;
	a[0]=0;a[1]=1;
	for(i=2;i<=maxm;i++)
		a[i]=a[i-1]+a[i-2];

	return 0;
}