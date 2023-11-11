#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	int c=1;
	while(t--)
	{
       int n, count=0;
       cin>>n;
       int a[n];
       
       for(i=0;i<n;i++)
       {
       	 cin>>a[i];
       }
       sort(a, a+n);
       for(i=0;i<n;i++)
       {
       	 if(a[i]>i)
       	 	count++;
       }
       cout<<"Case #"<<c<<": "<<count<<endl;
       c++;
       
	}
}