
#include <stdio.h> 
#include<string.h> 
 
int main(void)  
{ 
    char c[100]; 
    int n;
    scanf("%d",&n);
    while(n--){
     scanf("%s",c); 
    /*strlen(c) gives total length of string . string index starts from 0 
    last index of character is strlen(c)-1*/ 
    int l = strlen(c); 
    if(l<10)
    {
        printf("%s\n",c);
    }
    else
    {
       printf("%c%d%c\n",c[0],l-2,c[l-1]);  
    }
    

    }
    
    return 0; 
} 


























// #include <stdio.h>

// int main() {
//     int i,n,N;
//    char s[100],first,last;
//     scanf("%d",&N);

//    while(N--){
//    scanf("%s",s);
//    n= sizeof(s);
//    first = s[0];
//    last = s[n-1];
//    if(n<10)
//    printf("%s\n", s);
//    }
//    else
//    {
//     printf("%c %d %c",first,n,last);
//    }

    



//     return 0;
// }