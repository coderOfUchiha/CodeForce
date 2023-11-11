#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char str[n];
	string a[n];
	int count=1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(i>0)
		{
			if(a[i-1]!=a[i])
			{
                count++;
			}
		}
	}
	cout<<count<<endl;
}