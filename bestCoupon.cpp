#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x;
		cin>>x;
		if(x<=1000)
		{
			cout<<"100"<<endl;
		}
		else
		{
			cout<<(x/100)*10<<endl;
		}
	}
}