#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,sum=0;
		cin>>n;
		 for(int i =0;i<n;i++)
		 {
		 	cin>>x;
		 	if(x==0)
		 	{
                sum = sum+20;
		 	}
		 	if(x==1)
		 	{
		 		sum = sum + 15;
		 	}
		 	if(x==2)
		 	{
		 		sum= sum+30;
		 	}
		 }
		 cout<<sum<<" "<< "min"<<endl;
	}
}