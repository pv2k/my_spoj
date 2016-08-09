#include <iostream>
using namespace std;
int main()
{
	int n,i,j,res;
	cin >> n;
	while(n)
	{
		res=(n*(n+1)*((2*n)+1))/6;
		cout << res << endl;
		cin >> n;
	}
	return 0;
}