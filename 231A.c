#include<stdio.h>
int main()
{
    int n,a,b,c,count=0,i,total=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a==1)
        {
            count++;
        }
        if(b==1)
        {
            count++;
        }
        if(c==1)
        {
            count++;
        }
        if(count>=2)
        {
            total++;
        }
        count=0;
    }
    printf("%d",total);
    return 0;
}
