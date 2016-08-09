#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str1,str2,str3;
	int a[26],b[26],i,j,rst,k;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	while(cin >> str1 >> str2)
	{
		j=0;
		for(i=0;i<str1.size();i++)
			a[str1[i]-'a']++;
		for(i=0;i<str2.size();i++)
			b[str2[i]-'a']++;
		for(i=0;i<26;i++)
		{
			if(a[i]!=0 && b[i]!=0)
			{
				rst = min(a[i],b[i]);
				for(k=0;k<rst;k++)
				{
					str3[j] = i+'a';
					j++;
				}
			}
		}
		for(i=0;i<j;i++)
			cout << str3[i];
		cout << endl;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));	
	}
	return 0;
}