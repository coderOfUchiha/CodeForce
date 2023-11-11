#include <iostream>
#include<bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	   string rec_equation;
	   cin>>rec_equation;
	   int a,b,k,p;
	   cin>>a>>b>>k>>p;
       int logab= pow(b,k);
       int logba = log(a)/log(b);
           cout<<logba<<endl;

       if(a>logab)
       {
        	cout<<rec_equation<< "O(n^"<<logba<<")       "<<"Case:1"<<endl;
       }
       else if (a==logab)
       {
       	 if(p>-1)
       	 {
       	 	cout<<rec_equation<< "       O(n^"<<logba<<"log^"<<p+1<<"n )      "<<"Case:2"<<endl;
       	 }
       	 else if(p==-1)
       	 {
       	 	cout<<rec_equation<< "       O(n^"<<logba<<"loglogn)       "<<"Case:2"<<endl;
       	 }
       	 else if(p<-1)
       	 {
       	 	cout<<rec_equation<< "       O(n^"<<logba<<")       "<<"Case:2"<<endl;

       	 }
       	 
       }
       else if(a<logab)
       {
       	 if(p>=0)
       	 {
       	 	if(p>0)
       	 	{
       	 		cout<<rec_equation<< "       O(n^"<<k<<"log^"<<p<<"n       "<<"Case:3"<<endl;
       	 	}
       	 	else if(p==0)
       	 	{
       	 		cout<<rec_equation<< "       O(n^"<<k<<")       "<<"Case:3"<<endl;
       	 	}
       	 	
       	 }
       	 else if(p<0)
       	 {
       	 	cout<<rec_equation<< "       O(n^"<<k<<"       Case:3"<<endl;
       	 }
       }
       else
       {
       		cout<<rec_equation<<"       Invalid"<< "       doesnot apply"<<endl;
       }

	}
	

}
