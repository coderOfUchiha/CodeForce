#include <stdio.h>
int main()
{
    int n, i, a[1000], sum = 0, A, B;
    scanf("%d ", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d %d ", &A, &B);
    for (i = A; i <= B; i++)
    {
        /* code */ sum = sum + a[i];
    }
    printf("%d", sum);
}