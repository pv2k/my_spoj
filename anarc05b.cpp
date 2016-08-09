#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int bsearch(int val,int b[],int end,int start);
int main()
{
	int n,m,i,j,tmp1,tmp2,ref=100000;
	ll tmp,res;
	int a[ref],b[ref];
	ll sm[ref],sm2[ref];
	cin >> n;
	for(i=0;i<n;i++)
		cin >> a[i];
	while(n!=0)
	{
		cin >> m;
		res =0;
		for(i=0;i<m;i++)
			cin >> b[i];
		sm[0] = a[0];
		for(i=1;i<n;i++)
		{
			sm[i]=a[i]+sm[i-1];
		}
		sm2[0]=b[0];
		for(i=1;i<m;i++)
		{
			sm2[i]=b[i]+sm2[i-1];
		}
		tmp1=0;tmp2=0;
		for(i=0;i<n;i++)
		{
			int idx= bsearch(a[i],b,m-1,0);
			if(idx!=-1)
			{
				// cout << a[i] << endl;
				res+=max(sm[i]-tmp1,sm2[idx]-tmp2);
				tmp1=sm[i];
				tmp2=sm2[idx];
			}
		}
		res+=max(sm[n-1]-tmp1,sm2[m-1]-tmp2);
		cout << res << endl;
		cin >> n;
		for(i=0;i<n;i++)
			cin >> a[i];		
	}
	return 0;
}
int bsearch(int val,int b[],int end,int start)
{
	int mid;
	mid = (start+end)/2;
	while(start<=end && b[mid]!=val)
	{
		if(b[mid]<val)
			start = mid+1;
		else
			end = mid-1;
		mid = (start+end)/2;
	}
	if(b[mid]==val)
		return mid;
	else
		return -1;
}