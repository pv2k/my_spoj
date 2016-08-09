#include <iostream>
using namespace std;
int main()
{
	int t,i,j;
	long long int k,res;
	cin >> t;
	while(t--)
	{
		cin >> k;
		res=(192+(k-1)*250);
		cout << res << endl;
	}
	return 0;
}