#include <iostream>
using namespace std;
int main()
{
	int x,y,a,b;
	cin>>x;
	a=x/5;
	
	if(x%5==0)
	{
		cout<<a<<endl;
	}
	else
		cout<<a+1<<endl;
}