#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int x,y,y1;
		cin>>x>>y;
		y1 = x ^ y;
		 long long int y2 = x & y;
		cout<<y1 <<" " <<y2<<endl;

  	}
}