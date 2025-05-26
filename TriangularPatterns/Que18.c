// C program to Print Floyd Triangle Pattern
// using while loop
#include <stdio.h>

int main()
{
    int rows = 1, columns = 0, n = 5;
  
    // 1 value is assigned to the number
    // helpful to print the number pattern
    int number = 1;
  
    // while loops check the condition and repeat
    // the loop until the condition is false
    while (rows <= n) {
        while (columns <= rows - 1) {
          
            // printing number to get required pattern
            printf("%d ", number);
          
            // incrementing columns value
            columns++;
          
            // incrementing number value to print the next
            // number
            number++;
        }
        columns = 0;
      
        // incrementing rows value
        rows++;
        printf("\n");
    }
    return 0;
}