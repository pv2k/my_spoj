#include <bits/stdc++.h>
using namespace std;
bool isdig(int i,int d);
int main()
{
	int a,b,d,i,j,T,srt,cnt,freq,flag;
	bool prm[100001];
	for(i=0;i<=100000;i++)
		prm[i] = false;
	for(i=2;i<=100000;i++)
	{
		if(!prm[i])
		{
			for(j=2*i;j<=100000;j+=i)
				prm[j] = true;
		}
	}
	cin >> T;
	while(T--){
		cnt = 0;
		flag=1;
		cin >> a >> b >> d;
		srt = sqrt(b);
		int ax[b-a+1];
		for(i=a;i<=b;i++)
		{
			int lu=i;
			while(lu!=0)
			{
				if(lu%10==d)
				{
					ax[i-a] = 1; // has  3 in them..
					break;
				}
				lu=lu/10;
			}
			if(ax[i-a]!=1)
				ax[i-a] = 0;
		}
		for(i=a;i<=b;i++)
		{
			int k=i;
			flag =1;
			if(ax[i-a]==0)
				continue;
			if(!prm[i]){
				if(isdig(i,d)){
					cnt++;
				}
				continue; //prime
			}
			for(j=2;j<=srt;j++)
			{
				if(k%j==0)
				{
					freq=0;
					while(k%j==0 && k!=0)
					{
						freq++;
						k = k/j;
					}
					if(freq >= 2){
						flag = 0;
						break;
					}
				}
			}
			if(flag==1)
			{
				if(isdig(i,d))
				{
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
bool isdig(int i,int d)
{
	while(i!=0)
	{
		int tmp = i%10;
		if(tmp == d)
			return true;
		i = i/10;
	}
	return false;
}