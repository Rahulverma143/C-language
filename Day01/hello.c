#include <stdio.h>

int main()
{
    int n;
    printf("Enter number ");
    scanf("%d", &n);
     //int t =n*n+n;
      //int t = 1;
    for( int i = n; i>=1; i-- )
    {
    int t = 1;
        for (int  j = n; j>=1; j--)
        {
            if(j<=i) //{
            printf("%d  ", t++);
           //t = t+=2; 
                
           // }
            else
            printf("   ");
        }
        printf("\n");
    }

    return 0;
}