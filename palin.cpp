#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int T,i,j,len,flag,tmp,var;
	string a,str2;
	cin >> T;
	while(T--)
	{
		cin >> a;
		flag=0;
		var=0,tmp=0;
		len = a.size();
		for(i=(a.size()/2);i>=0;i--)
		{
			if(a[i]==a[len-1-i])
			{
				if(i==len-1-i)
				{
					tmp = a[i]-'0'+1;
					var = tmp/10;
					tmp = tmp%10;
					a[i] = tmp+'0';
				}
				else
				{
					if(var!=0)
					{
						tmp = a[i]-'0'+1;
						var = tmp/10;
						tmp = tmp%10;
						a[i] = tmp+'0';
						a[len-1-i] = a[i];
					}
				}
			}
			else
			{
				if(a[i]<a[len-1-i])
				{
					a[i] = a[i]+1;
					a[len-1-i] = a[i];
				}
				else
				{
					a[len-1-i] = a[i];
				}
			}
		}
		cout << a << endl;
	}

	return 0;
}