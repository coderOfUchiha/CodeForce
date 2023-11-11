#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int x;
		int arr[n];
		for(int i=0;i<n;i++)
		{
             x= s[i];
             arr[i]=x;
   
		}
		sort(arr, arr+n);
		cout<<arr[n-1]-96<<endl;
	}
}