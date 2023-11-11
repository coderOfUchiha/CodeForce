#include <iostream>
using namespace std;
int main()
{
	int t,j;
	cin>>t;
	for(j=1;j<=t;j++)
	{
		int n,m,i,sum=0,x;
		cin>>n>>m;
		for(i=0;i<n;i++)
		{
			cin>>x;
			sum=sum+x;
		}
		int remain= sum%m;
		cout<<"Case #"<<j<<": "<<remain<<endl; 
		
	}
}