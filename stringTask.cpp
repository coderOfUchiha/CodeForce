#include <iostream>

#include<cstring>
using namespace std;
int main()
{
	int i;
	string a;
	

	cin>>a;
	string result;
	int n=a.length();
	for(i=0;i<n;i++)
	{
		char ch = tolower(a[i]);
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='y')
		{
			continue;
		}
		else
		{
			cout<<"."<<ch;
		}
		

	}

}