#include <bits/stdc++.h>
using namespace std;

int findConversation(int a[],int h, int k, int n, int m){
	int count=0;
	for(int i=0;i<n;i++)
	{

		int hight = abs(a[i]-h);
		int weight = hight/k;
		if(m==1)
		{
			return 0;
		}

		if(hight%k==0 && weight<m && a[i]!=h)
		{
			count++;
		}

	}
	return count;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k,h;
		cin>>n>>m>>k>>h;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<findConversation(a,h,k,n,m)<<endl;
	}
}