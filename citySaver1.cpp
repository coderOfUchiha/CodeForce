#include <iostream>
using namespace std;
int main(){

	int n;
	cin>>n;
    int a[n+1],b[n];
    int sum=0;
    for(int i=0;i<n+1;i++)
    {
    	cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
    	cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
    	if(a[i]>=b[i])
    	{
    		sum = sum+b[i];
    	}
    	else
    	{
    		sum = sum+b[i]
    	}
    }
}