#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{

		int n, count=0, max=0;
		cin>>n;
		string b="",s;
		int arr[n],index;
		char a;
		cin>>a;
		cin>>s;
		for(int i=n-1;i>=0;i--)
		{
			if(s[i]==a)
			{
                b = s[i]+b;
                break;
			}
			else
			{
				b=s[i]+b;
			}
		}
		s= b+s;
		cout<<s<<endl;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='g')
			{
				if(max<count)
				{
					max = count;
					count=0;
				}
			}
			else
			{
				count++;
			}
		}
		cout<<max<<endl;
	}
}