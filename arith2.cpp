#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll T,i,j,t1,t2,tmp,t3,flag;
	cin >> T;
	char c;
	while(T--)
	{
		cout << endl;
		cin >> tmp;
		cin >> c;
		flag= 0;
		while(c!='=')
		{
			if(flag == 0)
			{
				cin >> t2;
				if(c=='+')
					tmp = tmp+t2;
				else if(c=='-')
					tmp = tmp-t2;
				else if(c=='*')
					tmp = tmp*t2;
				else if(c=='/')
					tmp = tmp/t2;
				flag = 1;
			}
			else
			{
				cin >> c;
				flag = 0;
			}
		}
		cout << tmp << endl;
	}
	return 0;
}