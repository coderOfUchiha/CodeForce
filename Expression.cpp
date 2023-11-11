#include <bits/stdc++.h>
using namespace std;
int main()
{
	int d,b,c,x;
	cin>>d>>b>>c;
	int a[5];
    int sum1,sum2,sum3,sum4,sum5;
    sum1= d*(b+c);
    sum2= (d+b)*c;
    sum3= d+b*c;
    sum4= d*b*c;
    sum5= d+b+c;
    a[0]= sum1;
    a[1]= sum2;
    a[2]= sum3;
    a[3]= sum4;
    a[4]= sum5;
    sort(a, a+5);
    cout<<a[4];

}