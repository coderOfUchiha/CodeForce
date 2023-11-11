#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >>t ;
	while(t--)
	{
		int n,count=0;
		cin>>n;
		int a[n],b[n],c,d;
		int i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			if(a[i]<a[i+1])
			{
				count++;
			}
			if(a[i]==a[i+1])
			{
				if(i<n-1)
				{
					c=i+2;
				    d=i+1;
				    b[i]= c;
			     	b[i+1]=d;
				}
				else if(i==n-1)
				{
					c=i+1;
					d=i-1;
					b[i]= c;
					b[i+1]=d;
				}
				
			}
		}
		if(count==n)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			for(i=0;i<n;i++)
			{
				cout<<b[i]<<" ";
			}
			cout<<endl;
		}

	}
}