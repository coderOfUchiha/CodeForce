#include <iostream>
using namespace std;
int main()
{
	int n,i,max,sum;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int a , b;
		cin>>a>>b;
		if(i==0)
		{
			max=b;
		}
		else
		{
			sum=max-a+b;
			if(sum>max)
			{
				max=sum;
			}
			else
			{
				continue;
			}
		}
	}
	cout<<max<<endl;
}