/*
 * Chapter 2: Exercise 5:
 * Increment operator.
 *
 */

#include <stdio.h>

int main (void) {

  int x=0, y=0;
  printf("Initial values: %d %d\n", x, y);
  
  y = x++;
  printf("Values after postfix++: %d %d\n", x, y);

  x = 0;
  y = ++x;
  printf("Values after prefix++: %d %d\n", x, y);

  return 0;
}
