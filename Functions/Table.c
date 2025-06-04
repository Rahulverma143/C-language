// #include<stdio.h>
// int tableOfNum(int n){
//     for(int i=1; i<=10; i++){
//         printf("%d * %d = %d\n ", n,i,n*i);
//     }
// }
// int main(){
//     tableOfNum(4);
//     tableOfNum(2);
// }



//  #include <stdio.h>
// int main() {
//   int n;
//   printf("Enter an integer: ");
//   scanf("%d", &n);

//   for (int i = 1; i <= 10; i++) {
//     printf("%d * %d = %d \n", n, i, n * i);
//   }
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int num, i = 1;

//   printf("Enter a number: ");
//   scanf("%d", &num);

//   printf("Multiplication Table of %d:\n", num);

//   while (i <= 10) {
//     printf("%d x %d = %d\n", num, i, num * i);
//     i++;
//   }

//   return 0;
// }

#include <stdio.h>
int main() 
{
    int i=1,n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    while (i<=10)
        {
            printf("%d x %d = %d\n",n,i,n*i);
            i++;
        }
    return 0;
}
