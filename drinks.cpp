#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double tp,sum=0;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum= sum+a[i];
	}
	
	tp = sum/n;
	cout<<setprecision(14)<<tp;

}