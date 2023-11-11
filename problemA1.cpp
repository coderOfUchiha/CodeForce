#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,count=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		string s;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cin>>s;
		char c[100];
		int len = sizeof(a);
		if(len==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
		  for(int i=0;i<n;i++)
		{
            c[a[i]]= s[i];
		}
		for(int i=0;i<n;i++)
		{
			if(c[a[i]]== s[i])
			{
				continue;
			}
			else
			{
				count++;
			}

		}
		if(count==0)
		{
			cout<<"YES"<<endl;

		}
		else
		{
			cout<<"NO"<<endl;
		}
		count=0;

		}


	}
}