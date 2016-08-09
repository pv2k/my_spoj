#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> adjlist[10001];
int sm[10001];
int dfs(int,bool vis[]);
int main()
{
	ios::sync_with_stdio(false);
	int N,i,j,x,y,mxm=-1;
	cin >> N;
	bool vis[N+1];
	memset(vis,false,sizeof(vis));
	for(i=1;i<N;i++)
	{
		cin >> x >> y;
		adjlist[x].push_back(y);
		adjlist[y].push_back(x);
	}
	dfs(1,vis);
	for(i=1;i<=N;i++){
		// cout << sm[i] << endl;
		if(sm[i]>mxm)
			mxm = sm[i];
	}
	cout << mxm << endl;
	return 0;
}
int dfs(int node,bool vis[])
{
	if(vis[node])
		return -1;
	int k,tmp,maxm1=0,sum=0,flag=0,maxm2=0;
	vis[node] = true;
	for(int i=0;i<adjlist[node].size();i++)
	{
		if(!vis[adjlist[node][i]]){
			flag=1;
			k = dfs(adjlist[node][i],vis)+1;
			// if(node==3)
				// cout << k << " "<<adjlist[node][i] <<endl;
			if(k>maxm1){
				tmp = maxm1;
				maxm1 = k;
				k = tmp;
			}
			if(k>maxm2)
				maxm2 = k;
		}
	}
	sum = maxm1+maxm2;
	sm[node] = sum;
	if(flag==0)
		return 0;
	return maxm1;
}