#include<stdio.h>
int main(){
    int n;
    printf("Enter nuber:");
    scanf("%d",&n);
    for(int j=1; j<=n; j++){
    for(int i=1; i<=n; i++){
        printf("%d",i);
    }
    printf("\n");
}
}
/*
enter nuber 4
1234
1234
1234
1234
*/