#include <stdio.h>
int main()
{
    int n;
    printf("Enter nuber:");
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
/*
1111
2222
3333
4444
*/