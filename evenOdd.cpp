#include <bits/stdc++.h>
using namespace std;
int main()
{
	 long long int n,i;
	cin>>n>>i;
	long long int odd,even;
	if(n%2==0)
	{
		n=n/2;
		odd=n;
		even=n;

	}
	else
	{
		n=n/2;
		odd=n+1;
		even=n;
	}
	if(i<=odd)
	{
		odd= i*2-1;
		cout<<odd<<endl;
	}
	else
	{
		even= (i-odd)*2;
		cout<<even<<endl;
	}
}