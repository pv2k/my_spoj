#include <bits/stdc++.h>
using namespace std;
int main()
{
	int wt,pt,i,j,maxm,minm,flg;
	cin >> wt >> pt;
	while(wt!=0 && pt!=0)
	{
		int wts[pt],val[pt];
		maxm = 0;flg=0;
		minm=100000;
		for(i=0;i<pt;i++)
			cin >> wts[i] >> val[i];
		int knpsck[pt][wt+1];
		for(i=0;i<pt;i++)
			knpsck[i][0] = 0;
		for(i=1;i<=wt;i++)
		{
			if(i>=wts[0]){
				knpsck[0][i] = val[0];
				if(i<minm){
					minm = i;
					maxm = val[0];
				}
			}
			else
				knpsck[0][i] = 0;
		}
		// cout << minm <<endl;
		for(i=1;i<pt;i++)
		{
			for(j=1;j<=wt;j++)
			{
				if(wts[i]<=j)
				{
					knpsck[i][j] = max(val[i]+knpsck[i-1][j-wts[i]],knpsck[i-1][j]);
					if(knpsck[i][j]>=maxm)
					{
						flg=1;
						// cout << 
						if(j<minm || knpsck[i][j]>maxm){
							minm = j;
						}
						maxm = knpsck[i][j];
					}
				}
				else
				{
					knpsck[i][j] = knpsck[i-1][j];
				}
			}
		}
		if(flg==1)
			cout << minm << " " << maxm << endl;
		else
			cout << "0" << " " << "0" << endl;
		// for(i=0;i<pt;i++)
		// {
		// 	for(j=0;j<=wt;j++)
		// 	{
		// 		cout << knpsck[i][j] << ' ';
		// 	}
		// 	cout << endl;
		// }
		cin >> wt >> pt;
	}
	return 0;
}