#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int N,i,j,res=0,proc=0;
	cin >> N;
	int a[10];
	for(i=0;i<10;i++)
		a[i]=-1;
	a[1]=0;
	a[7]=5;
	j=N;
	while(1)
	{
		res=0;
		while(j!=0)
		{
			i=j%10;
			res+=(i*i);
			j=j/10;
		}
		proc++;
		if(res/10==0)
		{
			if(res==1 || res==7)
			{
				proc+=a[res];
				break;
			}
			else{
				proc = -1;
				break;
			}
		}
		j=res;
	}
	cout << proc << endl;
	return 0;
}