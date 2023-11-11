#include <stdio.h>

int main() {
    int i,n,N;
    char source[100];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%s",&source);
        n=sizeof(source);
        if (n>10) {

        printf("%s %d %s", source[0],n, source[n]);
    }
    else {
        for (i = 0; i < n; i++) {

            printf("%c", source[i]);
        }
    }

    }

    

    getchar();

    return 0;
}