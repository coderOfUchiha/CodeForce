#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	int count =0;

	int a[5]={1,5,10,20,100};

	while(n>0)
	{
	   if(n>=100)
	   {
	   	 n=n-100;
	   	 count++;
	   }	
	   if(n>=20 && n<100)
	   {
	   	  n=n-20;
	   	  count++;
	   }
	   if(n>=10 && n<20){

	   		n=n-10;
	   		count++;
	   }
	   if(n>=5 && n<10)
	   {
	   		n=n-5;
	   		count++;
	   }
	   if(n>=1 && n<5)
	   {
	   		n=n-1;
	   		count++;
	   }
	}

	cout<<count;
}