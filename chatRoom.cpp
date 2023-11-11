#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	int i,h=0,e=0,l=0,o=0,b[5],count=0;
	cin>>a;
    for(i=0;i<a.length();i++)
    {
    	if(a[i]=='h')
    	{
    		h++;
            if(h==1)
            {
                b[0]= i;
            }
    	}
    	if(a[i]=='e')
    	{
    		e++;	
            if(e==1)
            {
                b[1]= i;
            }	
    	}
    	if(a[i]=='l')
    	{
    		l++;
            if(l==1)
            {
                b[2]= i;
            }
            else if(l==2)
            {
                b[3]=i;
            }

    	}
    	if(a[i]=='o')
    	{
    	    o++;
            if(o==1)
            {
                b[4]=i;
            }
    	}
    }
    for(i=0;i<5;i++)
    {
       if(b[i]>b[i+1])
       {
         count++;
       } 
    }
    if(count>0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}