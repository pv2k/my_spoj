#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int n,i,j,k;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
		cin >> a[i];
	cin >> k;
	deque<int>dq(k);
	for(i=0;i<k;i++)
	{
		while(!dq.empty() && a[i]>a[dq.back()])
			dq.pop_back();
		dq.push_back(i);
	}
	for(i=k;i<n;i++)
	{
		cout << a[dq.front()] << ' ';
		while(!dq.empty() && dq.front()<=i-k)
			dq.pop_front();
		while(!dq.empty() && a[i]>a[dq.back()])
			dq.pop_back();
		dq.push_back(i);
	}
	cout << a[dq.front()] << endl;
	return 0;
}