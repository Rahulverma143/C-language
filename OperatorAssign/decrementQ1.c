#include <stdio.h>

int main() {
    int a = 5, b = 5, c = 5;

    // Prefix increment
    int x = ++a;
    printf("a = %d, x = %d\n", a, x); // Output: a = 6, x = 6

    // Postfix increment
    int y = b++;
    printf("b = %d, y = %d\n", b, y); // Output: b = 6, y = 5

    // Prefix decrement
    int z = --c;
    printf("c = %d, z = %d\n", c, z); // Output: c = 4, z = 4

    return 0;
}