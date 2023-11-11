#include <bits/stdc++.h>
using namespace std;
int main()
{
	string p;
	int count=0;
	cin>>p;
	for(int i=0;i<p.length();i++)
	{
		if(p[i]=='H' || p[i]=='Q' || p[i]== '9' )
		{
			cout<<"YES"<<endl;
			break;
		}
		else
		{
			count++;
		}
	}
	if(count== p.length())
	{
		cout<<"NO"<<endl;
	}
}