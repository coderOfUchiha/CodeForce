#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],i,count=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n-1;i++)
		{
			if(a[i]>0)
			{
				if(a[i+1]<=0)
				{
					count++;
				}
			}
			else if(a[i]==0)
			{
				count++;
			}
			else
			{
				if(a[i+1]>=0|| a[i+1]<=0)
				{
					count++;
				}
			}
		}
		if(count==n-1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}