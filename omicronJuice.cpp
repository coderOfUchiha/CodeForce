#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	int cse=1,count=0;
	while(t--)
	{
		int a,b,c,k;
		cin>>a>>b>>c>>k;
		int sum;
		sum= a+b+c;
		int perglass;
		int g[3];
		g[0]=a;
		g[1]=b;
		g[2]=c;
		int d1,d2,d3;
		perglass = sum/3;
		if(a==b && b==c)
		{
		    cout<<"Case "<<cse<<":"<<" Peaceful"<<endl;
		}
		else if((a<k && b<k) || (b<k && c<k) || (c<k && a<k))
		{
			cout<<"Case "<<cse<<":"<<" Fight"<<endl;
		}
		else if( sum%3!=0 )
		{
			cout<<"Case "<<cse<<":"<<" Fight"<<endl;

		}
		else
		{
           d1= perglass - a;
           d2= perglass - b;
           d3= perglass - c;
           if(d1%k!=0 || d2%k!=0 || d3%k!=0)
           {
           	    cout<<"Case "<<cse<<":"<<" Fight"<<endl;
           }
           else
           {
           	 cout<<"Case "<<cse<<":"<<" Peaceful"<<endl;
           }
		}
		cse++;
	}
}
