#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T,i,j,x,n;
	int las;
	long long int y;
	cin >> T;
	int a[10] = {0,0,4,4,2,0,0,4,4,2};
	while(T--)
	{
		cin >> x>> y;
		if(y==0){
			cout << "1" << endl;
			continue;
		}
		n = x%10;
		if(a[n]==0)
		{
			cout << n << endl;
			continue;
		}
		else if(a[n]==2)
		{
			
			if(y%2==0)
			{
				las = (pow(n,2));
				cout << las%10 << endl;
			}
			else
				cout << n << endl;
		}
		else
		{
			int yup=(y%4);
			if(yup==0)
				yup+=4;
			las = (pow(n,yup));
			cout << las%10 << endl;
		}
	}
	return 0;
}