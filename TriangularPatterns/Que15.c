// C program to print continuous 
// character pattern using
// character
#include <stdio.h>
int main() 
{    
    int i, j;
  
    // Number of rows
    int rows = 3;
  
    // Taking first character of alphabet
    // which is useful to print pattern
    char character = 'A';
  
    // This loop is used to identify 
    // number rows
    for (i = 0; i < rows; i++) 
    {
        // This for loop is used to 
        // identify number of columns 
        // based on the rows
        for (j = 0; j <= i; j++) 
        {
            // Printing character to get 
            // the required pattern
            printf("%c ",character);
          
            // Incrementing character value so 
            // that it will print the next character
            character++;
        }
        printf("\n");
    }
    return 0;
}