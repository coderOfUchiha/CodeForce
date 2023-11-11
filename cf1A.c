#include<stdio.h>
int main()
{
    long long int a,b,n,c,d;
    scanf("%lld %lld %lld",&a,&b,&n);
    if(a%n==0)
    {
        c=(a/n);
    }
    else
    {
        c=(a/n)+1;
    }
    if(b%n==0)
    {
        d=(b/n);
    }
    else
    {
        d=(b/n)+1;
    }
    printf("%lld",c*d);


}
