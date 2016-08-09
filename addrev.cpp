#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j,max,tmp;
	string str1,str2;
	cin >> n;
	while(n--)
	{
		tmp = 0;
		string str3;
		cin >> str1 >> str2;
		// cout << str2[0] << endl;
		if(str1.size()<str2.size()){
			max=str2.size();
			for(i=str1.size();i<str2.size();i++)
			{
				str1[i] = '0';
			}}
		else
		{
			max = str1.size();
			for(i=str2.size();i<str1.size();i++)
			{
				str2[i]='0';
			}
		}
		for(i=0;i<max;i++)
		{
			int val=(str1[i]-'0')+(str2[i]-'0')+tmp;
			if(val>=10){
				tmp = val/10;
				val = val%10;
			}
			else
				tmp = 0;
			str3[i] = val+'0';
		}
		if(tmp!=0)
		{
			str3[max]=tmp+'0';
			max=max+1;
		}
		int flag=0;
		for(i=0;i<max;i++){
			if(str3[i]!='0' || flag!=0)
			{
				flag=1;
				cout << str3[i];
			}
		}
		cout << endl;
	}
	return 0;
}