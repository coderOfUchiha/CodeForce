#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],sum=0,i,even[n],odd[n],m=0,j=0,count=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]%2==0)
			{
				sum+=a[i];
				count++;
			}
		}
		while(sum%2!=1)
		{
			sum=sum/2;
			count++;
		}
		
		cout<<count<<endl;



	}
}