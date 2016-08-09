#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T,i,j,m;
	long long int n;
	cin >> T;
	while(T--)
	{
		cin >> n >> m;
		if(m==0)
			cout << "Airborne wins." << endl;
		else 
			cout << "Pagfloyd wins." << endl;
	}
	return 0;
}