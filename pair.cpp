#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		int i,j,k,count=0;
		cin>>n;
		int a[n];
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(i=1,j=i+1;i<n,j<=n;i++,j++)
		{
			for(k=1;k<=n;k++)
			{
				if(sizeof(a)==1)
				{
					cout<<"1"<<" "<<"1"<<endl;
				}
				else if(abs(a[i]-a[k])+abs(a[k]-a[j])== abs(a[i]-a[j]))
				{
					count++;
				}
			}
			if(count ==n)
			{
				cout<<i<<" "<<j<<endl;
				break;
			}
			else
			{
				continue;
			}
		}
	}
}