#include <iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int a[n],j,i,sum=0,ind;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cin>>j;
		int b[j];
		for(i=0;i<j;i++)
		{
			cin>>b[i];
		}
		for(i=0;i<j;i++)
		{
			sum=sum+b[i];

		}
		if(sum<n)
		{
			cout<<a[sum]<<endl;
		}
		else
		{
            ind =sum%n;
            cout<<a[ind]<<endl;
		}


	}
}