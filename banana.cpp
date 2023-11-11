#include <iostream>
using namespace std;
int main()
{
	int a,b,c,i,sum=0;
	cin>>a>>b>>c;
	for(i=1;i<=c;i++)
	{
		sum= sum+ i*a;
	}
	if(sum<=b)
	{
		cout<<0<<endl;
	}
	else
	{
		cout<<sum-b<<endl;
	}
}