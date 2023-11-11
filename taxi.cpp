#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,count=0,j=0,sum=0;
	vector <int> v;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);

	}
	for(int i=0;i<v.size();i++)
	{
		sum= v[i];
		cout<<"first sum:"<<sum<<endl;
		for(j=i+1;j<v.size();j++)
		{
			// if(v[i]==4)
			// {
			// 	count++;
			// 	v.erase(v.begin()+i);
			// 	cout<<"count when v[i]:"<<count<<endl;
			// 	j= v.size();
			// }
			if(v[j]==-1)
			{
				continue;
			}
			else if( v[j]>0)
			{
						    if( v[j]>0 && sum+v[j]<=4)
			{		
				sum= sum+v[j];
				cout<<"sum:"<<sum<<endl;
				v[j]=-1; 
				// if(v.size()-1==i)
				// {
				// 	count++;
				// }
				
				
			}
			}

			// else if(sum==4)
			// {
			// 	count++;
			// 	cout<<"count when sum:"<<count<<endl;
			// 	j=v.size();
			// }

			
		}
				if(sum<=4)
		{
			count++;
			cout<<"count when less:"<<count<<endl;
		}
	}

		for(int i=0 ;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
		cout<<"final result:"<<count<<endl;

	}

	
