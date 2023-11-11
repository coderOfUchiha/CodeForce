#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int count=0,count1=0;
	while(t--)
	{
		int n;
		cin>>n;
		char c;
		cin>> c;
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]!='g')
			{
				count++;
			}
			else
			{
				break;
			}
		}
		for(int i=s.length()-1;i>=0;i--)
		{
			if(s[i]!='g')
			{
				count++;
			}
			else
			{
				break;
			}

		}
		cout<<count1+count<<endl;
		count=0;
		count1=0;

	}
}