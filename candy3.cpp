#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll T,i,j,n,x;
	ll sum;
	cin >> T;
	while(T--)
	{
		cout << endl;
		sum=0;
		cin >> n;
		for(i=0;i<n;i++)
		{
			cin >> x;
			sum=(sum%n+x%n)%n;
		}
		if(sum%n==0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}