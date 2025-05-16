#include <stdio.h>

int main() {
  int x = 10;
  printf("%d\n", --x);
  printf("%d", --x + x-- - --x );
  return 0;

}
//  9
//  9 is the output of this program