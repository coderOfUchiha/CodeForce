#include <bits/stdc++.h>
using namespace std;
int main()
{
 	string a,b;
    cin>>a>>b;
 	string result="";
 	for(int i=0;i<a.length();i++)
 	{
 		if(a[i]==b[i])
 		{
            result.insert(i, "0");
 		}
 		else
 		{
 			result.insert(i, "1");
 		}
 	}
 	cout<< result;
}