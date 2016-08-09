#include <bits/stdc++.h>
using namespace std;
const long double PI=3.1415926;
int main()
{
	int l,i,j;
	cin >> l;
	float res;
	while(l)
	{	
		res = (l*l)/(2*PI);
		printf("%.2f\n",res);
		cin >> l;
	}
	return 0;
}