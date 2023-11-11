#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m=0,temp,r,a[4],count=0;
	cin>>n;
	cout<<n;
	
	while(1)
	{
        n++;
        for(int i=0;i<4;i++)
        {
        	temp=n;
        	r=temp%10;
        	temp=temp/10;
        	a[m]= temp;
        	m++;
        }
        for(int i=0;i<4;i++)
        {
        	cout<<a[i];
        }
        for(int i=0;i<4;i++)
        {
        	if(a[i]==a[i+1])
        	{
        		count++;
        	}
        }
        if(count==0)
        {
        	cout<<n;
        	break;
        }
        else
        {
        	continue;
        }
        m=0;


	}
}