#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,x;
		scanf("%d %d",&N,&x);
		if(x==2*N)
		{
			printf("1\n");
		}
		else if(x==1)
		{
			printf("%d\n",2*N);
		}
		else
		{
			int p = 2*N-x+1;
			printf("%d\n",p);
		}



}

}