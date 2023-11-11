#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n,i,count=0;
		double sum=0.0;
		cin>>n;
		double a[n];
		for(i=0;i<n;i++)
		{
            cin>>a[i];
            sum=sum+a[i];
		}
		
		double avg=sum/n;
		for(i=0;i<n;i++)
		{
            if(avg==a[i])
            {
               count++;
            }

		}
		if(count>0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
  	}
}