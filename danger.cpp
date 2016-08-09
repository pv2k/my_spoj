#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,tmp,x,y,z,res,flag;
	int a[30];
	tmp =1;
	for(i=0;i<30;i++)
	{
		a[i] = tmp;
		tmp*=2;
	}
	string str1;
	cin >> str1;
	while(str1 != "00e0")
	{
		flag=0;
		x = str1[0]-'0';
		y = str1[1]-'0';
		x = (10*x)+y;
		z = str1[3]-'0';
		x = x*pow(10,z);
		for(i=0;i<30;i++){
			if(a[i]>x)
				break;
			if(a[i]==x){
				flag=1;
				cout << "1" << endl;
				break;
			}
		}
		if(flag==0){
			tmp = x-a[i-1];
			res = 1+(tmp*2);
			cout << res << endl;
		}
			cin >> str1;
	}
	return 0;
}