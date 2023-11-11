#include<bits/stdc++.h>
using namespace std;

double fn (double x)
{
    return x*x+2*x-5;
}
double simpsons (double a, double b, int n)
{
    double h=(b-a)/n;
    double x[10], fx[10];

    for (int i=0; i<=n ; i++)
    {
        x[i]=a + i * h;
        fx[i]=fn(x[i]);
    }

    double r=0;
    for (int i=0; i<=n; i++)
    {
        if (i==0 || i==n)
            r+=fx[i];
        else if (i%2==0)
            r+=2* fx[i];
        else
            r+=4* fx[i];
    }

    r= r* (h/3);

    return r;
}


int main ()
{
    double a,b;
    cin>>n;
    cin>>a;
    int b;
    cin>>b;
    cout<<simpsons(a,b);

}
