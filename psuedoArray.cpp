#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n,pos=0;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{

				swap(a[i],a[i+1]);
				pos++;
			}
			

		}
		
		if(pos>1)
			{
				
				cout<<"NO"<<endl;
			}
			else
			{
				cout<<"YES"<<endl;
			}

	}

}
