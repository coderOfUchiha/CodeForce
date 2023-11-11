#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if (a < b){
    swap (b,a);
}

if (b < c){
    swap (c,b);
}

if (c < d){
    swap (d,c);
}

// You now have `d`.
// To sort this you need to do this 3 more
// times to get the other three values
if (a < b){
    swap (b,a);
}

if (b < c){
    swap (c,b);
}

if (c < d){
    swap (d,c);
}

// You now have d and c correct.
if (a < b){
    swap (b,a);
}

if (b < c){
    swap (c,b);
  }

if (c < d){
    swap (d,c);
   }
 }
 if(a-b==1)
 {
 	cout<<"1"<<b;
 }
 else
 {
 	cout<<(b+d)/2;<<(b-d)/2;
 }
}
