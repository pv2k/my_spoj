#include <bits/stdc++.h>

using namespace std;
long long int gcd(long long int,long long int);
int main()
{
	int t,i,j,pos,len,cnt,m;
	long long int gd,var,tmp;
	string str;
	cin >> t;
	while(t--)
	{
		cnt=0;
		pos = -1;var=0;
		cin >> str;
		for(i=str.size()-1;i>=0;i--){
			if(str[i]=='.'){
				pos = i;
			}
		}
		if(pos!=-1)
			cnt = (str.size()-(pos+1));
		// cout << cnt << endl;
		tmp = pow(10,cnt);
		// cout << tmp << endl;
		for(i=0;i<str.size();i++)
		{
			if(str[i]!='.'){
				var = (var*10)+(str[i]-'0');
			}
		}
		// cout << var << endl;
		gd=gcd(var,tmp);
		cout << tmp/gd << endl;
	}
	return 0;
}
long long int gcd(long long int num,long long int denm)
{
    long long int m=num;long long int n=denm;long long int r;
    do
    {
        r = m % n;
        if(r == 0)
            break;
        m = n;
        n = r;
    }
    while(true);
    return n;
}
