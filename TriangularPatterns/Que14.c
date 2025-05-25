#include <stdio.h>

int main() {
    int n = 5;

  	int c = 1;
    // Outer loop for printing rows
    for (int i = 0; i < n; i++) {

        // Inner loop for printing numbers in each rows
        for (int j = 0; j <= i; j++)
            printf("%d ", c++);
        printf("\n");
    }
    return 0;
}