#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],i=0,sum=0,store=0,count=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum= sum+a[i];
	}
	sort(a,a+n);
	for(i=n-1;i>=0;i--)
	{
       store= store+a[i];
       count++;
       if(store>(sum/2))
       {
           cout<<count<<endl;
           break;
       }
	}
}