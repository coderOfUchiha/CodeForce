#include <iostream>
using namespace std;
int main()
{
	int n,e;
	cin>>n>>e;
	int q;
    bool a[n+1][n+1];
    for(int i =0;i<e;i++)
    {
    	int x,y;
    	cin>>x>>y;
    	a[x][y]= true;
    	a[y][x]= true;
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
    	int b,c;
        cin>>b>>c;
        if(a[b][c]== true)
        {
        	cout<<"vertices are connected"<<endl;
        }
        else
        {
        	cout<<"vertices are not connected"<<endl;
        }
    }
}