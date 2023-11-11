#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int i,count=0;
	for(i=0;i=a.length();i++)
	{
		if(a[i]!=7 && a[i]!=4)
		{
			count++;
		}
	}
	if(count>0)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
	}
}