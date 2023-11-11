#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t ;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],sum=0,count=0,b[n],j=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum+a[i];
		}
		
			if(sum%2==0)
			{
				cout<<"0"<<endl;
			}
			else
			{
			 int i=0;
			  while(true)
			   {
                 if(a[i]%2==0)
                 {
                 	a[i]= a[i]/2;
                 	 if(a[i]%2==0)
                 	 {
                 	 	count++;
                 	 }
                 	 else
                 	 {
                 	 	b[i]=count;
                 	 	i++;
                 	 	count=0;
                 	 }
                 }
                 else
                 {
                 	 a[i]= a[i]/2;
                 	 if(a[i]%2==0)
                 	 {
                 	 	count++;
                 	 }
                 	 else
                 	 {
                 	 	b[i]=count;
                 	 	i++;
                 	 	count=0;
                 	 }
                 	 if(i==n)
                 	 {
                 	 	break;
                 	 }

                 }
                 
                 


               {

               }
			}
			sort(b, b+n);
			cout<<b[0]<<endl;

			}
			
	}
}