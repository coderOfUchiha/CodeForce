#include <iostream>
using namespace std;
int main()
{
	int a[5][5],i,j,x,y,pos;
	 for(i=0;i<5;i++)
	 {
	 	for(j=0;j<5;j++)
	 	{
	 		cin>>a[i][j];
	 		if(a[i][j]==1)
	 		{
	 			x=i;
	 			y=j;
	 		}
	 	}
	 }
	
	 
	 if(x<=2)
	 {
	 	if(y<=2)
	 	{
           cout<<4-(x+y)<<endl;
	 	}
	 	else if(y==3)
	 	{
	 		cout<<abs(4-(x+y)+2)<<endl;
	 	}
	 	else
	 	{
	 		cout<<abs(4-(x+y)+4)<<endl;
	 	}
	 }
	 else
	 {
         if(x==3 && y<=2)
         {
         	cout<<abs(4-(x+y)+2)<<endl;
         }
         else if(x==4 && y<=2)
         {
         	cout<<abs(4-(x+y)+4)<<endl;
         }
         else
         {
         	cout<<abs(4-(x+y))<<endl;
         }
	 }


}