#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	string a="I hate ";
	string b="that ";
	string c="I love ";
	string d="it";
	string result="";
	int flag=0;
	cin>>n;


	if(n==1)
	{
		cout<<"I hate it";
	}
	else
	{
		for(int i=0;i<n;i++)
		{
		
				if(flag==0)
				{
					if(i==n-1)
					{
					   result+=a;
					   result+=d;
					   flag=1;
					}
					else
					{
					   result+=a;
					   result+=b;
					   flag=1;
					}
				}
				else
				{
					if(i==n-1)
					{
					   result+=c;
					   result+=d;
					   flag=0;
					}
					else
					{
					   result+=c;
					   result+=b;
					   flag=0;
					}
				}

			}

		}
		cout<<result<<endl;
	}