#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n , m,i,j;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cin>>m;
		int b[m];
		for(i=0;i<m;i++)
		{
			cin>>b[i];
		}
		sort(a, a+n);
		sort(b, b+m);
		if(a[n-1]>b[m-1])
		{
			cout<<"Alice"<<endl;
			cout<<"Alice"<<endl;
		}
		else if(a[n-1]<b[m-1])
		{
			cout<<"Bob"<<endl;
			cout<<"Bob"<<endl;
		}
		else
		{
			cout<<"Alice"<<endl;
			cout<<"Bob"<<endl;

		}


	}
}