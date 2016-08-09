#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
	ll T,i,j,x,y,sum,n,d,a;
	cin >> T;
	while(T--)
	{
		cin >> x >> y >> sum;
		if(sum%(x+y)==0){
			n=(sum)/(x+y);
			n *= 2;
		}
		else
		{
			sum = sum-((x+y)/2);
			n = (sum)/(x+y);
			n *= 2;
			n+=1;
		}
		cout << n << endl;
		d = (y-x)/((n-1)-4);
		a = x-2*d;
		for(i=0;i<n;i++)
			cout << a+i*d << " ";
		cout << endl;
	}
	return 0;
}