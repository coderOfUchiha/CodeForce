#include <iostream>
using  namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,zero=0,one=0;
	    cin>>n;
		string s;
		cin>>s;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='0')
			{
                 zero++;
			}
			else
			{
				one++;
			}
		}
		if(zero==one)
		{
			cout<<2*zero<<endl;
		}
		else if(zero<one)
		{
	           cout<<2*zero+1<<endl;
		}
		else
		{
	         cout<<2*one+1<<endl;
		}
	}
}