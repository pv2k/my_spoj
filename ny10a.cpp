#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<string,int>mpc;
	int p,i,T,j,val;
	cin >> T;
	int a[8];
	string str;
	while(T--)
	{
		cin >> p;
		cin >> str;
		for(i=0;i<8;i++)
			a[i]=0;
		for(i=0;i<str.size()-2;i++)
		{
			int k=1;val=0;
			for(j=i+2;j>=i;j--)
			{
				if(str[j]=='H')
					val+=k;
				k=2*k;
			}
			a[val]++;
		}
		cout << p;
		for(i=0;i<8;i++)
			cout << " " << a[i];
		cout << endl;
	}
}