#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		string a;
        cin>>a;
        int N = a.length();
        int min=0;
        for(int i =0;i<N;i++)
        {
             int count =0;
        	for(int j=i+1;j<N;j++)
        	{
        		if(a[i]== a[i-1])
        		{
        			i++;
        		}
        		else if(a[i]==a[j])
        		{
        			count++;
        		}
        	}
        	if(count%2!=0)
        	{
        		min++;
        	}
        }
        cout<<min<<endl;
		
	}
}