#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int cse=1;
	while(t--)
	{
        long long int n ,k;
        cin>>n>>k;
        long long int a[n];
        for(long long int i=0;i<n;i++)
        {
        	cin>>a[i];
        }
      long long int pqa1=0;
       for(long long int i=0;i<n;i++)
       {
       	 pqa1 = pqa1+ a[i];
       }
       sort(a,a+n);
        long long int t;
       t= pqa1 + (k-1)*a[n-1];
       cout<<"Case "<<cse<<": "<<t<<endl;
       cse++;

	}
}