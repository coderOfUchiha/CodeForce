#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b;
		cin>>a>>b;
		if(a==0 && b==0)
		{
			cout<<"1"<<endl;
		}
		else if(a==0)
		{
			cout<<"1"<<endl;
		}
		else
		{
           cout<<a+2*b+1<<endl;
		}
	}
	/* code */
	return 0;
}