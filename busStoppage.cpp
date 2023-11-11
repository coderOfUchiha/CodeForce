#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	int j=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n-1];
		int a ,b;
		int sum=0;
		for(int i=0;i<n-1;i++)
		{
			cin>>a>>b;
            sum = sum +(a-b);
            arr[i]=sum;
		}
		int ans = *max_element(arr, arr+n-1);
		j++;
		
		cout<<"Case "<<j<<": "<<ans<<endl;

	}
}