#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int T,i,j,flag;
	cin >> T;
	string str1,str2,str3,str4,str5;
	ll t1,t2,t3;
	while(T--)
	{
		cout << endl;
		flag=0;
		cin >> str1 >> str2 >> str3 >> str4 >> str5;
		for(i=0;i<str1.size() && flag==0;i++){
			if(str1[i]=='m')
			{
				flag=1;
				break;
			}
		}
		for(i=0;i<str3.size() && flag==0;i++){
			if(str3[i]=='m')
			{
				flag=3;
				break;
			}
		}	
		for(i=0;i<str5.size() && flag==0;i++){
			if(str5[i]=='m')
			{
				flag=5;
				break;
			}
		}
		if(flag==1)
		{
			t2 = stoll(str3);
			t3 = stoll(str5);
			t1 = t3-t2;
		}
		else if(flag==3)
		{
			t1 = stoll(str1);
			t3 = stoll(str5);
			t2 = t3-t1;
		}
		else if(flag==5)
		{
			t1 = stoll(str1);
			t2 = stoll(str3);
			t3 = t1+t2;
		}
		cout << t1 << " " << str2 << " " << t2 << " " << str4 << " " << t3 << endl;
	}
	return 0;
}