#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int a[n],even=0,odd=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]%2==0)
			{
				even++;
			}
			else
			{
				odd++;
			}
		}
		if(odd>even)
		{
			cout<<even<<endl;
		}
		else
		{
			cout<<odd<<endl;
		}
	}
}