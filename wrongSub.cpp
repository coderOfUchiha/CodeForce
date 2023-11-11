#include <iostream>
using namespace std;
int main()
{
	int a,n;
	cin>>a>>n;
	int i;
	for(i=0;i<n;i++)
	{
		if(a%10==0)
		{
			a=a/10;
		}
		else
		{
			a--;
		}
	}
	cout<<a<<endl;
}