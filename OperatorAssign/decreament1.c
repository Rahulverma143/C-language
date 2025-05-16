#include <stdio.h>

int main() {
  int x = 10;
  printf("%d\n", --x);
  printf("%d\n", --x + x-- - --x );
   printf("%d\n", --x - x-- - --x );
   printf("%d", --x - x++);
  return 0;

}
//  9
//  9
//  -4
// 1 output of this program
