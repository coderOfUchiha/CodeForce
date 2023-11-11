#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,x=0;
	while(n--)
	{
		string s;
		cin>>s;
		if(s=="++X"|| s=="X++")
		{
			x++;
		}
		if(s=="X--"|| s=="--X")
		{
			x--;
		}
	}
	cout<<x;

}