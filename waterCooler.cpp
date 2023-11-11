#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,max,z;
		cin>>x>>y;
        max= y/x;
        z= x*max;
        if(z==y)
        {
        	cout<<max-1<<endl;
        }
        else
        {
        	cout<<max<<endl;
        }
	}
}