#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a[8][8];
		int i,j,count=0,r,c;
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{
				cin>>a[i][j];
			}
		}
		for(i=1;i<7;i++)
		{
			for(j=0;j<8;j++)
			{
				if(a[i][j]=='#')
				{
					count++;
					r=i;
					c=j;
					

				}
			}
			
		}

	}
}