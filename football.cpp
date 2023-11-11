#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	int i,count1=0,count0=0,z=0;
	cin>>a;
	int n=a.length();
	for(i=0;i<n;i++)
	{
		if(a[i]=='1')
		{
			count1++;
			count0=0;
		}
		else
		{
			count0++;
			count1=0;
		}
		if(count0>=7 || count1>=7)
		{
			z=1;
		}
		
	}
	
	if(z==1)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}