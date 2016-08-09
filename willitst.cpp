#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int tmp;
	ll N,i,cnt=0;
	cin >> N;
	while(N!=0)
	{
		tmp = N&1;
		if(tmp==1)
			cnt++;
		N>>=1;
		if(cnt>1)
			break;
	}
	if(cnt==1)
		cout << "TAK" << endl;
	else
		cout << "NIE" << endl;
	return 0;
}