#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	int count=0;
	if(t==0 || t==1)
	{
		cout<<"non-prime"<<endl;
		count++;
	}
	else
	{
		for(long long int i=2;i<= sqrt(t);i++)
	       {
		     if(t%i==0)
		     {
			   cout<<"non-prime"<<endl;
			   count++;
			   break;
		     }
	       }
	}

	if(count==0)
	{
		cout<<"prime"<<endl;
	}
	
}