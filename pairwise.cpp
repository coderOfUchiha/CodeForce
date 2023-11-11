#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ans = n&~(n-1);
		if(n&1==1 || n== ans) 
		{
			cout<<"-1"<<endl;

		}
		else
		{
			cout<<ans/2<<" "<<n/2<<" "<<(n-ans)/2<<endl;
		}
	}
}
