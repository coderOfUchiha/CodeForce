#include <bits/stdc++.h>
using namespace std;
double y;
double x[100];

void dif(int t,int h,int count, int n){
    if(count==1)
    {
    	 y= (x[t+h]-x[t])/h;
    	 cout<<y;
    	 count++;
    	 dif(t+1,h,count,n);
    }
    else if(count==n)
    {
    	y= (x[t]-x[t-h])/h;
    	 
        cout<<y;
        count++;
    	dif(t+1,h,count,n);
    }
    else
    {
    	 y= (x[t+h]-x[t-h])/2*h;
    	cout<<y;
    	count++;
    	dif(t+1,h,count,n);
    	
    }


}


int main()
{
	int count=1;
	
	int T;
	cin>>T;
	int n=T;
	while(T--)
	{
		int t,s;
		cin>>t>>s;
	    x[t]=s;
	    if(T==0)
	    {
	    	int h=1;
	       dif(t,h,count, n);
	       
	    }
	    
	    

	}
	
	

	


}