#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N,i,j,val;
	long int sum=0;
	cin >> N;
	for(i=1;;i++)
	{
		val = N/i;
		if(N/i < i){
			cout << sum << endl;
			break;
		}
		sum += ((N/i)-i+1); 
	}
	return 0;
}