#include <bits/stdc++.h>
using namespace std;
int dfs(int,bool visited[]);
vector<int> adjlist[10000];
int main()
{
	ios::sync_with_stdio(false);
	int i,j,n,m,x,y,flag=1;
	cin >> n >> m;
	bool visited[n+1];
	memset(visited,false,sizeof(visited));
	for(i=1;i<=m;i++){
		cin >> x >> y;
		adjlist[x].push_back(y);
		adjlist[y].push_back(x);
	}
	if(n-1!=m)
		cout << "NO" << endl;
	else
	{
		dfs(1,visited);
		for(i=1;i<=n;i++)
		{
			if(!visited[i])
			{
				// cout << i << endl;
				flag=0;
				break;
			}
		}
		if(flag==0)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}
int dfs(int node,bool visited[])
{
	if(visited[node]){
		// cout << "vis "<<node << endl;
		return 0;
	}
	visited[node] = true;
	// cout << node << endl;
	for(int i=0;i<adjlist[node].size();i++)
	{
		int k = adjlist[node][i];
		// cout << "k "<<k << endl;
		if(!visited[adjlist[node][i]])
		{
			// cout << "a";
			// int k = adjlist[node][i];
			// cout << k << endl;
			dfs(k,visited);
		}
	}
	return 0;
}