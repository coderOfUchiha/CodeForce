#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m=0,temp,r,a[4],count=0;
	cin>>n;
    int check[10];

	
	while(1)
	{
        for(int i=0;i<10;i++)
        {
            check[i]=-1;
        }
        
        n++;
        temp=n;

        for(int i=0;i<4;i++)
        {
        	
        	r=temp%10;;
        	temp=temp/10;
            if(check[r]==r)
            {
                continue;
            }
            else
            {
                check[r]=r;
                count++;
            }
        	
        }

        if(count==4)
        {
            cout<<n<<endl;
            break;
        }
        count=0;
	}
}