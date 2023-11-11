#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
	int n,i,j,count=0,l;
	string a;
	cin>>a;
	l= a.length();
	sort(a.begin(), a.end());
	for(i=0;i<l;i++)
	{ 
			
			if(a[i]!=a[i+1])
			{
				count++;
			}
		
	}
	if(count%2==0)
	{
		cout<<"CHAT WITH HER!"<<endl;
	}
	else
	{
		cout<<"IGNORE HIM!"<<endl;
	}
}