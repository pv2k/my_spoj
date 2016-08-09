#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll mergesort(int a[],int tmp[],int left,int right);
ll merge(int a[],int tmp[],int left,int right);
int main()
{
	ios::sync_with_stdio(false);
	int T,i,j,n;
	cin >> T;
	ll res;
	while(T--)
	{
		cout << endl;
		cin >> n;
		int a[n],tmp[n];
		for(i=0;i<n;i++)
			cin >> a[i];
		res = mergesort(a,tmp,0,n-1);
		cout << res << endl;
	}
	return 0;
}
ll mergesort(int a[],int tmp[],int left,int right)
{
	int mid;
	ll inv_count=0;
	if(right>left)
	{
		mid=(right+left)/2;
		inv_count+=mergesort(a,tmp,left,mid);
		inv_count+=mergesort(a,tmp,mid+1,right);
		inv_count+=merge(a,tmp,left,right);
	}	
	return inv_count;
}
ll merge(int a[],int tmp[],int left,int right)
{
	int mid,i,j,k;
	ll inv_count=0;
	mid = (left+right)/2;
	i = left;
	k  = i;
	j = mid+1;
	while(i<=mid && j<=right)
	{
		if(a[i]<a[j])
			tmp[k++] = a[i++];
		else
		{
			tmp[k++] = a[j++];
			inv_count+=(mid+1-i);
		}
	}
	while(i<=mid)
		tmp[k++] = a[i++];
	while(j<=right)
		tmp[k++] = a[j++];
	for(i=left;i<=right;i++)
		a[i] = tmp[i];
	return inv_count;
}