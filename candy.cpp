#include <iostream>
using namespace std;
int main()
{
	int n,i,j,res;
	cin >> n;
	while(n!=-1)
	{
		res=0;
		int a[n],sum=0,tmp;
		for(i=0;i<n;i++){
			cin >> a[i];
			sum+=a[i];
		}
		if(sum%n!=0)
			cout << "-1" << endl;
		else
		{
			tmp = sum/n;
			for(i=0;i<n;i++)
			{
				if(a[i]>tmp)
					res+=(a[i]-tmp);
			}
			cout << res << endl;
		}
		cin >>n;
	}
	return 0;
}