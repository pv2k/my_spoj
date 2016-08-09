#include <iostream>

using namespace std;
int main()
{
	int t,i,j,x,y;
	cin >> t;
	while(t--)
	{
		cin >> x >> y;
		if(x==y)
		{
			if(x%2!=0)
			{
				int k = (x-1)/2;
				cout << 1+(k*4) << endl;
			}
			else
			{
				int k = x/2;
				cout << k*4 << endl;
			}
		}
		else if((x-y)==2)
		{
			if(x%2==0)
			{
				int k =(x-2)/2;
				cout << 2+(k*4) << endl;
			}
			else
			{
				int k =(x-3)/2;
				cout << 3+(k*4) << endl;
			}
		}
		else
			cout <<"No Number" << endl;
	}
	return 0;
}