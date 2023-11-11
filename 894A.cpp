#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t ;
	string s= "vika";
	while(t--){
		int n,m,k=0,count=0;
		cin>>n>>m;
		char arr[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>arr[i][j];
			}
		}
		for(int j=0;j<m;j++)
		{
			int set=0;
			for(int i=0;i<n;i++)
			{
				if(arr[i][j]==s[k])
				{
					set=1;
				}
			}
			if(set==1)
			{
				count++;
				k++;
			}
		}
		if(count==4)
		{
			cout<<"YES"<<endl;
		} 
		else
		{
			cout<<"NO"<<endl;
		}
	}
}