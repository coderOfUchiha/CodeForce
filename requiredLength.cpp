#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	
		int n ,x, a,b,max=0,count=0;
		cin>>n>>x;
		int c;
		c=x;
		while(c!=0)
		{
			a = x%10;
			c= c/10;
			if(a>max)
			{
				max=a;
			}

		}
		 int L = (int)(pow(10, n-1) + 0.5);
         
		while(1)
		{
			x = x*max;
			if((x/L)>1)
			{
				break;
			} 
			else
			{
				count++;
			}
		}
		cout<<count<<endl;


        
	
}