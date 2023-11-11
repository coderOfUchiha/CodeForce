#include <bits/stdc++.h>
using namespace std;
string s;


int main(){


	getline(cin,s);
	bool flag;

	for(int i=0;i<s.length();i++)
	{

		if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
			{
					cout<<" ";
					i+=2;
					
				
			}
			else
			{
				cout<<s[i];
			}
		// if(a[i]!='W' && a[i]!='U' && a[i]!='B')
		// {
        //     dub+=a[i];
		// }
        // if(a[i]=='W' && a[i+1]!='U' && a[i+2]!='B')
        // {
        // 	dub+=a[i];
        // }
		// if(a[i]=='U' && a[i-1]!='W' && a[i+1]!='B')
		// {
		// 	dub+=a[i];
		// }
		// if(a[i]=='B' && a[i-1]!='U' && a[i-2]!='W')
		// {
		// 	dub+=a[i];
		// }
		// if(a[i]=='W' && a[i-1]!='B' && a[i-2]!='U' && a[i-3]!='W' && i!=0 && i!= a.length()-2)
		// {
		// 	dub+=' ';
		// }

	}
	
	
}