#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int T,i,j;
	ll sqr;
	cin >> T;
	double res,r;
	j = 1;
	while(T--)
	{
		cin >> r;
		sqr = r*r;
		sqr = 4*sqr;
		res = sqr-(0.25);
		res = res+0.5;
		printf("Case %d: %.2f\n",j,res);
		j++;
	}
	return 0;
}