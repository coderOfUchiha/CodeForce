#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int Case=1;
	while(t--)
	{
		int r,c,i,j;
		cin>>r>>c;
		cout<<"Case #"<<Case<<":"<<endl;
		Case++;
		for(i=1;i<=2*r+1;i++)
		{
			for(j=1;j<=2*c+1;j++)
			{
				if(i%2==1)
				{
					if(i==1)
					{
						if(j==1 || j==2)
						{
							cout<<".";
						}
						else if(j%2==1)
						{
							cout<<"+";
						}
						else
						{
							cout<<"-";
						}

					}
				   else 
				   {
				   		if(j%2==1)
				   		{
				   			cout<<"+";
				   		}
				   		else
				   		{
				   			cout<<"-";
				   		}
				   }

				}
				else if (i%2==0)
				{
					if(i==2)
				    	{
						if(j==1 || j==2)
						{
							cout<<".";
						}
						else if(j%2==1)
						{
							cout<<"|";
						}
						else
						{
							cout<<".";
						}

					}
				   else 
				   {
				   		if(j%2==1)
				   		{
				   			cout<<"|";
				   		}
				   		else
				   		{
				   			cout<<".";
				   		}
				   }
				}
				

			}
			cout<<endl;
		}
		
	}
}