#include <stdio.h>
int main()
{
    int x = 2;
    int y = 4;
    int i = 0;
    int power = 1;
    while (i < y)
    {
        power *= x;
        i++;
    }
    printf("%d", power);
}