#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i;
    string a;
    cin>>a;
    for(i=0;i<a.length();i++)
    {
 		if(a[0]>92)
 		{
 			a[0]=a[0]-32;
 		}
 		else
 		{
 			continue;
 		}
    }
    cout<<a;
}