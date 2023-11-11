#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    long long int i,c,c1;
    long long int n= a.length();
    
    c = count(a.begin(),a.end(), '7');
    c1 = count(a.begin(), a.end(), '4');
   
    if((c+c1)==4 || (c+c1)==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}