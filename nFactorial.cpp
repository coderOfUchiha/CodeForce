#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
    long long int fact=1;
	while(t--)
	{
		int n;
		cin>>n;
		if(n==0|| n==1)
		{
			cout<<"0001"<<endl;
		}
		else
		{
			for(int i=2;i<=n;i++)
			{
				fact = fact*i;
			}
		}
		if(fact>1 && fact<10)
		{
			cout<<"000"<<fact<<endl;
			fact = 1;
		}
		else if( fact>=10 && fact<100)
		{
			cout<<"00"<<fact<<endl;
			fact = 1;
		}
		else if(fact>=100 && fact<1000)
		{
			cout<<"0"<<fact<<endl;
			fact = 1;
		}
		else if(fact>=1000)
		{
			cout<<fact<<endl;
			fact = 1;
		}
	}
}