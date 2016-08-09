#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,k,freq;
	bool prm[10001];
	cin >> n;
	for(i=0;i<=10000;i++)
		prm[i] = false;
	for(i=2;i<=10000;i++)
	{
		if(!prm[i])
		{
			for(j=2*i;j<=10000;j+=i)
				prm[j] = true;
		}
	}
	for(i=2;i<=n;i++)
	{
		freq=0;
		if(!prm[i])
		{
			if(i!=2)
				cout << "* ";
			k = i;
			while(n/k)
			{
				freq+=n/k;
				k = k*i;
			}
			cout << i << "^" << freq << " ";
		}
	}
	cout << endl;
	return 0;
}