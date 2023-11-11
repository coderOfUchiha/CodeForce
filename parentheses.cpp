#include <iostream>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		int a,b;
		cin>>a>>b;
		if(a>b)
		{
			cout<<"Case "<<i<<": "<<b<<endl;
		}
		else if(b>a)
		{
			cout<<"Case "<<i<<": "<<a<<endl;
		}
		else
		{
			cout<<"Case "<<i<<": "<<a<<endl;
		}
	}
}