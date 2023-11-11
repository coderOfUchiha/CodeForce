#include <bits/stdc++.h>
using namespace std;

int possibility(int a[], int n){
	vector<int>b;
	for(int i=0;i<n;i++)
	{
		b[i]=a[i];
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		int n,x;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i];
		}

		cout<<possibility(a,n);
 }
}