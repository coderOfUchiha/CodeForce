#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int count=0,a[n],i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				count++;
			}
		}
		if(count==0)
		{
			cout<<0<<endl;
		}
		
		else
		{
			count=(count/2)+1;
		    cout<<count<<endl;
		}
		
	}
}