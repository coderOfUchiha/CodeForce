#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	cin>>a;
	b=a;
	int i,lc=0,uc=0;
	sort(b.begin(),b.end());
	for(i=0;i<a.length();i++)
	{
		if(a[i]<92)
		{
			uc++;
		}
		else
		{
			lc++;
		}
	}
	if(uc<=lc)
	{
		transform(a.begin(), a.end(), a.begin(), ::tolower);
    	cout << a << endl;
	}
	else
	{
		transform(a.begin(), a.end(), a.begin(), ::toupper);
   		cout << a << endl;
	}
}