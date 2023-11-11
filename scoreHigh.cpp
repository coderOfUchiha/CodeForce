#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[4],i,max;
		for(i=0;i<4;i++)
		{
			cin>>a[i];
		}
		max = a[0];
		for(i=1;i<4;i++)
		{
            if(a[i]>max)
            {
            	max=a[i];
            }
		}
		cout<<max<<endl;

}
}