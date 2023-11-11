#include <stdio.h>

int main()
{
	
	int test,i,j;
	scanf("%d",&test);
	while(test--)
	{
		int n,B,x,y;
		long long int sum=0;
		
	     scanf("%d %d %d %d",&n,&B,&x,&y);
	     int a[n];
	     
	     a[0] =0;
          for(i=1;i<=n;i++){
          	if(a[i-1]+x<=B)
          	{
          		a[i]= a[i-1]+x;
          	}
          	else{
          		a[i]= a[i-1]-y;
          	}
          }
          for(i=0;i<=n;i++)
          {
               sum= sum+a[i];
          }
          printf("%lld\n",sum );
	}
}