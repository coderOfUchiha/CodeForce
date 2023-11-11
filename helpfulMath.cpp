#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	string a;
	cin>>a;
	for(i=0;i<a.length();i+=2)
	{
		for(int j=0;j<a.length();j+=2)
		{
			
			if(a[i]<a[j])
			{
				swap(a[j],a[i]);
			}
			

		}
		

	}
	cout<<a;

}