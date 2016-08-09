#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,i,j,m;
	cin >> n;
	while(n!=-1)
	{
		n = (4*n-1)/3;
		m = sqrt(n);
		if(n==(m*m))
			cout << "Y" << endl;
		else 
			cout << "N" << endl;
		cin >> n;
	} 
}