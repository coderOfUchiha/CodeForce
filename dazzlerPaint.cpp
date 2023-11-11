#include <iostream>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int x;
		cin>>x;
		if(x%4==0)
		{
			cout<<x+3<<endl;
		}
		if(x%4==1)
		{
			cout<<x<<endl;
		}
		if(x%4==2|| x%4==3)
		{
			cout<<"3"<<endl;
		}
		

	}
	
}