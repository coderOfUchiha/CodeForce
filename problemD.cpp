#include<bits/stdc++.h>
#include <math.h>
using namespace std;


double func(double x)
{
    return sin(x)-cos(x);
}

double c;


void bisection(double a ,double b)
{
  if(func(a) * func(b) >= 0)
  {
      cout<< "Invalid" <<endl;
      return;
  }
  else{
    c = a;
    while((b-a) >= 0.00001)
     {
      c=(a+b) / 2;
      if(func(c) == 0.0)
      {
          break;
      }
     else  if(func(c) * func(a) > 0)
      {
         
          a = c ;
      }
      else
      {
          
          b = c ;
      }
    }
  }
  
  
}


int main()
{
    int a,b;
    cin>>a>>b;
    a= (a*3.141592654)/180;
    b= (b*3.141592654)/180;

    bisection(a,b);
    cout<< (c*180)/3.141592654<<endl;
    return 0;
}
