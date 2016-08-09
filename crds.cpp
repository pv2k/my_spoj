#include <iostream>
using namespace std;
const long long int mdm = 1000007;
int main()
{
	ios::sync_with_stdio(false);
	long long int T,i,j,n;
	long long int res;
	cin >> T;
	while(T--)
	{
		res=0;
		cin >> n;
		res = (((3*(n)*((n+1)))))/2;
		res = ((res)-(n));
		res = res%mdm;
		cout << res << endl;
	}
	return 0;
}