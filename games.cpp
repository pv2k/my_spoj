#include <bits/stdc++.h>

using namespace std;
int main()
{
	long long int t,i,j,flag;
	float n,k;
	cin >> t;
	while(t--)
	{
		flag=0;
		cin >> n;
		long int m;
		for(i=1;;i++)
		{
			k=n*i;
			m = k;
			// cout << abs(k-(m+1)) << endl;
			if(abs(k-(m+1))<0.001f || abs(k-m)<0.001f)
			{
				cout << i << endl;
				break;
			}
			// cout << m << endl;
		}
	}
	return 0;
}