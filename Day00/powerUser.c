#include<stdio.h>
int main(){
    int x,y;
    int i=1;
    int power=1;
    printf("Enter value of x ");
    scanf("%d",&x);

    printf("Enter value of y ");
    scanf("%d",&y);

    while(i<=y){
        power=power*x;
        i++;
    }
    printf("%d",power);
}