#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ios::sync_with_stdio(false);
	int i,len,j,tmp,flag;
	string str;
	cin >> str;
	len = str.size();
	tmp = 1;
	while(!(str[0]=='0' && len==1))
	{
		ll a[len];
		a[0]=1;
		for(i=1;i<str.size();i++)
		{
		    if(str[i+1]=='0')
				a[i] = a[i-1];
			else if(str[i-1]-'0'<=2 && str[i]-'0'<=9 && str[i-1]-'0'>0 && str[i]-'0'>0)
			{
				if(str[i-1]-'0'==2)
				{
					if(str[i]-'0'>6)
						a[i] = a[i-1];
					else
						a[i] = tmp + a[i-1];
				}
				else 
					a[i] = tmp + a[i-1];
			}
			else
				a[i] = a[i-1];
			tmp = a[i-1];
		}
		cout << a[str.size()-1] << endl;
		cin >> str;
		len = str.size();
		tmp =1;	
	}

	return 0;
}