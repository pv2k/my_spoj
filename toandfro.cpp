#include <bits/stdc++.h>

using namespace std;
int main()
{
	int col,row,i,j,tmp;
	cin >> col;
	string str;
	while(col)
	{
		cin >> str;
		row = str.size()/col;
		for(i=0;i<col;i++)
		{
			for(j=0;j<row;j++)
			{
				if(j%2==0)
					tmp = i+(j*col);
				else
					tmp = ((j+1)*col)-(i+1);
				cout << str[tmp];
			}	
		}	
		cout << endl;
		cin >> col;
	}
	return 0;
}