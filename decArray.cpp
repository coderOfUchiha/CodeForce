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
		int a[n],b[n],i,j,count=0,sum=0,sum1,count1=0,count3=0,count4=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>b[i];
		}
		
		for(i=0;i<n;i++)
		{
			if(a[i]>0 && b[i]>0)
			{
				sum = sum + (a[i]-b[i]);
				count++;
			}
			if(count==1)
			{
				sum1= sum;
			}
			if(b[i]>a[i])
			{
				count1++;
			}
			if(b[i]==0)
			{
				count3++;
			}
		}
		int avg = sum/count;
		if(n==1)
		{
			cout<<"YES"<<endl;
		}
		else if(avg==sum1 && count==n)
		{
			cout<<"YES"<<endl;
		}

		else if(count1>0)
		{
			cout<<"NO"<<endl;
		}
		else if( avg==sum1)
		{
			for(i=0;i<n;i++)
			{
				if(b[i]==0 &&(a[i]-b[i])<sum)
				{
					count4++;
				}
			}
			if(coun4==count3)
			{
				cout<<"YES"<<endl;
			}
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
			
}