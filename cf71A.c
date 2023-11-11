#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0,n,j,N;
    char a[100],c,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",&a);
        N= strlen(a);
        if(N<=10)
        {
            printf("%s\n",a);
        }
        else
        {
          for(j=0;j<N;j++)
           {
            if(j==0)
            {
                c=a[j];
            }
            else if(j==N-1)
            {
                d=a[j];
            }
          }
         printf("%c%d%c\n",c,N-2,d);
        }


    }
}
