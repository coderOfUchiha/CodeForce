#include <bits/stdc++.h>
using namespace std;

string result(int a[],int n){

	int arr[n][n];
	int brr[n][n];
	int sum1=0,sum2=0;
	for(int i=n-1;i>=0;i--)
	{
		for(int j=n-1;j>=0;j--)
		{

			if(j<a[i])
				{
					arr[j][i]=1;
				}
			else
			{
				arr[j][i]=0;
			}
		}
	}
	for(int i=n-1;i>=0;i--)
	{
		for(int j=0;j<n;j++)
		{
			if(j<a[i])
			{
				brr[i][j]=1;
			}
			else
			{
				brr[i][j]=0;
			}
			
		}
	}
	// for(int i=0;i<n;i++)
	// {
	// 	for(int j=0;j<n;j++)
	// 	{
	// 		cout<<arr[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	// for(int i=0;i<n;i++)
	// {
	// 	for(int j=0;j<n;j++)
	// 	{
	// 		cout<<arr[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			sum1+=arr[i][j];
			sum2+=brr[i][j];
		}
		if(sum1!=sum2)
		{
			return "NO";
		}
	}
	return "YES";


}


int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		if(a[0]!=n)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<result(a,n)<<endl;
		}
        


	}
}