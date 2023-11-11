#include <stdio.h>
#include<math.h>
int main()
{
	int test;
   scanf("%d",&test);
    while(test--) {
          int a, b;
    scanf("%d %d",&a,&b);
    

    if(a == 0 && b == 0) 
      {
     	printf("0");
      }
else
 {
 	int x = a * a, y = b * b;int t = sqrt (x + y);
     if (t* t == x + y)
     	{
     		printf("1");
     	}
     else {
     	printf("2");
     }
}
    }
    return 0;
}