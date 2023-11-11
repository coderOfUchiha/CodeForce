#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int j=0;
	while(t--)
	{
	    int count=0;
		int a,b,c,k;
		cin>>a>>b>>c>>k;
		int sum;
		sum= a+b+c;
		int div = sum%3;
		int juice = sum/3;
		
		if(div!=0)
		{
			j++;
			cout<<"Case "<<j<<": Fight"<<endl;
		}
		else
		{
			a= abs(juice-a);
			
			b= abs(juice-b);
			

			c =abs(juice-c);
			
			if(a%k==0)
				count++;
			if(b%k==0)
				count++;
			if(c%k==0)

				count++;
			if(count==3)
		      {
			     j++;
			     cout<<"Case "<<j<<": Peaceful"<<endl;
		      }
		   else
		     {
			  j++;
			  cout<<"Case "<<j<<": Fight"<<endl;
		     }

		}
		
	}
}