#include <bits/stdc++.h>
const long int maxm = 10000001;
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	vector<int>vec;
	long int T,i,j,n,m,cnt;
	long int tmp=1,x,y,count;
	vec.push_back(0);
	vec.push_back(1);cnt=2;
	while(tmp <= maxm){
		tmp = vec[vec.size()-1]+cnt;
		cnt++;
		vec.push_back(tmp);
	}
	// for(i=0;i<vec.size();i++)
	// 	cout << vec[i] << endl;
	cin >> T;
	while(T--)
	{
		cin >> m;
		n = m;
		count = 1;
		for(i=1;i<vec.size();i++)
			if(n<=vec[i] && n>vec[i-1])
			{
				j = i;
				break;
			}
		n = n-vec[j-1];
		if(j%2==0)
		{
			for(x=1;x<=j;x++)
			{
				y = (j+1)-x;
				if(count==n)
					break;
				count++;
			}
		}
		else
		{
			for(x=j;x>=1;x--)
			{
				y = (j+1)-x;
				if(count==n)
					break;
				count++;
			}
		}
		cout << "TERM " << m << " IS " << x << "/" << y<< endl;	
	}
	return 0;
			
}