#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, count=1,j=0;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
       if(a[i]<=a[i+1])
         {
         	count++;
         }
         else
         {
         	b[j]=count;
         	count=1;
         	j++;
         }

	}
	b[j]= count;
	sort(b,b+j+1);
  if(j==0)
  {
  	cout<<count<<endl;
  }
  else
  {
  	cout<<b[j];
  }
}