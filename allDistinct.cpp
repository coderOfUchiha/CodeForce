#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],count=0;
		int i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];

		}
		sort(a,a+n);
		
		for(i=0;i<n-1;i++)
		{
			if(a[i]==a[i+1])
			{
				count++;
			}
		}
		
		
		if(n%2==0)
		{
			if(count%2==0)
			{
				cout<<n-count<<endl;
			}
			else
			{
				cout<<n-count-1<<endl;
			}
		}
		else
		{
			if(count%2==0)
			{
				cout<<n-count<<endl;
			}
			else
			{
				cout<<n-count-1<<endl;
			}
		}

	}
}