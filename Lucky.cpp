#include <iostream>
#include<string>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--)
    {
        string arr;
        int i, sum1=0,sum2=0;
        cin>>arr;
       for(int i = 0; i<6 ; i++)
       {
        if(i<3)
          {
            sum1+=arr[i];
          }
        else
          {
            sum2+=arr[i];
          }
       }
   if(sum1==sum2)
   {
    cout<<"YES"<<endl;
   }
   else
   {
    cout<<"NO"<<endl;
   }

    }
  }
   
 

