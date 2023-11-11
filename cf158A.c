#include<stdio.h>
int main()
{
    int n,k,count=0,i,x,a[50],j=0,max;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        a[j]=x;
        j++;
        if(i==k)
        {
            max = x;
        }
    }

    for(j=0;j<n;j++)
    {
        if(a[j]>=max && a[j]>0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;

}
