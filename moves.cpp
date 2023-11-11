#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
         int n;
         long long sum=0;
         scanf("%d",&n);
         if(n%2==0)
         {
              printf("%d\n",n/2);

         }
         else
         {
           int d = -(n+1)/2;
           printf("%d\n",d);

         }
         
	}
}