#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long int sum=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+1];
		string s;
		cin>>s;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		for(int i=0;i<n;i++)
		{
			if(a[i]>a[i+1])
			{
				if(s[i]=='0' && s[i+1]=='1')
				{
					sum=sum+a[i];
					s[i+1]='0';
				}
				else if(s[i]=='1' && s[i+1]=='0')
				{
					sum = sum+a[i];
				}
			}

			else if(a[i]<a[i+1])
			{
				if(a[i+1]>a[i+2] && s[i+1]=='1' && s[i+2]=='1')
				{
					sum = sum+a[i];
					s[i+1]='0';
				}
				else if(s[i]=='1')
				{
					sum= sum+a[i];
				}

			}
		}
		cout<<sum<<endl;
		sum=0;
	}
}