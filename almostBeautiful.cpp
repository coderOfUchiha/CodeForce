#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i, check[3],temp,r,m=0,track=0,count=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			temp=i;
            while(temp!=0)
            {
               r=temp%10;
               temp=temp/10;
               check[m]=r;
               m++;
            }
      for(int j=0;j<m;j++)
		{
			if(check[j]==4 || check[j]==7)
			{
				count++;
			}
		}
		if(count == m)
		{
			cout<<"YES"<<endl;
			break;
		}
		else
		{
            track++;
		}
		m=0;
		count=0;
		}
		else
		{
			track++;
		}
	}
	if(track==n)
	{
		cout<<"NO"<<endl;
	}
}