#include <stdio.h>
int main()
{
	int t,x,y,d;
	scanf("%d",&t);
	for(int i =0;i<t;i++)
	{
		scanf("%d %d %d",&x,&y,&d);
		
		if(abs(x-y)<=d)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO");
			printf("\n");
		}
	}
}