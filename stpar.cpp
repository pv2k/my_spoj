#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	vector<int>vec1;
	deque<int>q1;
	// queue<int>::iterator it;
	int n,i,j,var,tmp,flag;
	cin >> n;
	while(n!=0)
	{
		int a[n+1];
		for(i=1;i<=n;i++)
			cin >> a[i];
		flag=1;
		tmp=1;
		vec1.clear();
		q1.clear();
		for(i=1;i<=n;i++)
		{
			if(a[i]==tmp)
			{
				vec1.push_back(a[i]);
				// cout << a[i] <<" "<< tmp<< endl;
				tmp++;
				if(var==tmp && !q1.empty())
				{
					// cout << var << endl;
					vec1.push_back(var);
					tmp++;
					q1.pop_back();
					while(!q1.empty())
					{
						var = q1.back();
						// cout << var << " " << tmp << endl;
						if(var!=tmp)
						{
							break;
						}
						q1.pop_back();
						vec1.push_back(var);
						tmp++;
						// cout << tmp << endl;
					}
				}
			}
			else
			{
				q1.push_back(a[i]);
				var = a[i];
				// cout << var << endl;
			}
		}
		tmp = tmp-1;
		while(!q1.empty())
		{
			var = q1.back();
			tmp++;
			if(var!=tmp)
			{
				// cout << var << endl;
				// cout << tmp << endl;
				flag=0;
				break;
			}
			// cout << var << endl;
			q1.pop_back();
		}
		if(flag==1)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
 		cin >> n;
	}
	return 0;
}