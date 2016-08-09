#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int i,j,x,y,mxm,minm;
	cin >> x >> y;
	while(x!=-1 && y!=-1)
	{
		mxm = max(x,y);
		minm = min(x,y);
		if(minm==0 && mxm==0)
			cout << "0" << endl;
		else{
			for(i=1;;i++)
			{
				if((i*(minm+1))>=mxm)
				{
					cout << i << endl;
					break;
				}
			}
		}
		cin >> x >> y;
	}
	return 0;
}