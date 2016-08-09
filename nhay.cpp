#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int prefixarr(string,int,string,int);
int kmp(string pat,int n,string txt,int m,int lps[]);
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,i,j;
	ll m;
	string pat,txt;
	while(cin>>n)
	{
		cin >> pat;
		cin >> txt;
		m = txt.size();
		if(n>m)
			cout << endl;
		else
			prefixarr(pat,n,txt,m);
	}

	return 0;
}
int prefixarr(string pat,int n,string txt,int m)
{
	int lps[n],i,len=0; //len is length of longest prefix
	i=1;
	lps[0]=0;
	while(i<n)
	{
		if(pat[i]==pat[len])
		{
			len++;
			lps[i] = len;
			i++;
		}
		else
		{
			if(len!=0)
			{
				len = lps[len-1];
			}
			else
			{
				lps[i]=0;
				i++;
			}
		}
	}
	kmp(pat,n,txt,m,lps);
	return 0;
}
int kmp(string pat,int n,string txt,int m,int lps[])
{
	int i,j,flag;//i for pat j for txt
	i=0;j=0;flag=0;
	while(j<m)
	{
		if(pat[i]==txt[j])
		{
			i++;
			j++;
		}
		else
		{
			if(i!=0)
				i = lps[i-1];
			else
				j++;
		}
		if(i==n)
		{
			flag=1;
			cout << j-i << endl;
			i = lps[i-1];
		}
	}
	if(flag==0)
		cout << endl;
	return 0;
}