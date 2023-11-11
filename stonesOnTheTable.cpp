#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string a;
	cin>>a;
	int i,count=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==a[i+1])
		{
			count++;
		}
	}
	cout<<count<<endl;
}