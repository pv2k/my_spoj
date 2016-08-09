#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,i,j,t;
	long long int b;
	cin >>t;
	whie(t--)
	{
		cin >> a >> b;
		a = a%10;
		if(a==5 || a==0 || a==1 || a==6)
			cout << a << endl;
		else if(a==9)
		{
			if(b%2==0)
				cout << "1" << endl;
			else
				cout << "9" << endl;
		}
		else if(a==4)
		{
			if(b==0)
				cout << "1" << endl;
			else if(b%2==0)
				cout << "6" << endl;
			else
				cout << "4" << endl;
		}
		else if(a==2)
		{
			if(b==0)
				cout << "1" << endl;
			else if(b%4==1)
				cout << "2" << endl;
			else if(b%4==2)
				cout << "4" << endl;
			else if(b%4==3)
				cout << "8" << endl;
			else if(b%4==0)
				cout << "6" << endl;
		}
		else if(a==3)
		{
			if(b%4)
		}
	}
	return 0;
}