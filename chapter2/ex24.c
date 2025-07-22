/*
 * Chapter 2: Exercise 4:
 * Calculate and display the remainder.
 *
 */

#include <stdio.h>

int main (void) {

  int x=0, y=0, z=0;
  printf("Enter dividend: ");
  scanf("%d", &x);
  printf("Enter divisor: ");
  scanf("%d", &y);

  z = x % y;
  printf("Remainder: %d\n", z);
  return 0;
}
