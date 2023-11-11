#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	cin>>t;
	int i,j,temp;
	while(t--)
	{
		long long int n;
		cin>>n;
		 long long int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a, a+n);
		if(n==1 && a[0]>1)
		{
			cout<<"NO"<<endl;
		}
		else if(a[n-1]-a[n-2]<=1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}