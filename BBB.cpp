#include <iostream>
using namespace std;
int main()
{
	int a ,b,i;
	cin>>a>>b;
	for(i=0;i>=0;i++)
	{
		a=a*3;
		b=b*2;
		if(a>b)
		{
			break;
		}
	}
	
	cout<<i+1<<endl;
}