#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int count=0, count1=0, sqr,result,cse=1;
	int b[n], c[n];
	while(t--)
	{
		int n;
		cin>>n;
		char a[3][n];
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		for(int j=0;j<n;j++)
		{
			if(a[0][j]=='O' && a[1][j]== 'O')
			{
				count++;
			}
			else if(a[1][j]=='O' && a[2][j]== 'O')
			{
				count1++;
			}
		}
	}
	if(count1< count)
	{
		sqr = count;
	}
	if(count==count1)
	{
		sqr=count;
	}
	else
	{
		sqr= count1;
	}
	if(sqr%2==0)
	{
       result = (sqr/2)-1;
	}
	else
	{
		result = sqr/2;
	}
	if(result%2==0)
	{
		cout<<"Case "<<cse<<": "<<"Grandma"<<endl;
	}
	else
	{
		cout<<"Case "<<cse<<": "<<"Jhinuk"<<endl;
	}
	cse++;
	count=0;
	count1=0;
}