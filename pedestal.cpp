#include <iostream>
using namespace std;
int main()

{
	int t;
	cin>>t;
	while(t--)
	{
		int x,a[3];
		cin>>x;
		int y = x/3;
		int b = x%3;
		
		if(b==0)
		{
			 a[0]= y;
			 a[1]= y+1;
			 a[2]= y-1;
		}
		else if(b==1)
		{
			  a[0]= y;
			  a[1]= y+2;
			  a[2]= y-1;
		}
		else if(b==2)
		{
			 a[0]= y+1;
			 a[1]= y+2;
			 a[2]= y-1;
		}
		for(int i=0;i<3;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}