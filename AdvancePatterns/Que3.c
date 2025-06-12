#include<stdio.h>
int main(){
    int n=4;
    for (int i = 1; i <=n; i++)
    {
        for(int j=n; j>=1; j--){
            if(j<=i){
                printf("%d ",i);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
}

//    1 
//   2 2 
//  3 3 3 
// 4 4 4 4 

//  --------------------------------------

// #include<stdio.h>
// int main(){
//     int n=4;
//     for (int i = 1; i <=n; i++)
//     {
//         for(int j=n; j>=1; j--){
//             if(j<=i){
//                 printf("%d ",j);
//             }else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
    
// }


//   1 
//   2 1
//  3 2 1
// 4 3 2 1