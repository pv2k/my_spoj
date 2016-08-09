#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int
int main()
{
	ios::sync_with_stdio(false);
	int N,i,j;
	ll x,res=0;
	cin >> N;
	for(i=0;i<N;i++)
	{
		cin >> x;
		res = res^x;
	}
	cout << res << endl;
	return 0;
}