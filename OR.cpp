#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,bit;
		cin>>n;
		bit = log2(n);
		int x = n-bit-1;
		cout<<x<<endl;

	}
}