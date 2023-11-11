#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int N;
	    scanf("%d",&N);
	    int s[N], d[N];
	    int count=0; 
	    for(int i =0;i<N;i++){
	    	scanf("%d",&s[i]);
	    }
	    for(int j =0;j<N;j++){
	    	scanf("%d",&d[j]);
	    }
	    for(int k=0;k<N;k++)
	    {
	    	if(s[k]==d[k])
	    	{
	    		count++;
	    	}
	    }
	    printf("%d\n",count);
	}
}