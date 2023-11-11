#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,k,p;
    cin>>a>>b>>k>>p;
    int c =log2(a) / log2(b);
    cout<< c;
    if(c>k)
    {
        cout<<"Theta("<<"n^"<<c<<")"<<endl;
    }
    if(c==k)
    {
        
    }

    
}
