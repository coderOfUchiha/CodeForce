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
		int a[n];
		int i,count=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=n-1;i>=0;i--)
		{
           if(a[i]==0)
           {
           	 count++;
           }
           else
           {
           	 break;
           }
		}
		cout<<n-count-1<<endl;
	}
}