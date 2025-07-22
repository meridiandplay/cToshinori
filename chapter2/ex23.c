/*
 * Chapter 2: Exercise 3:
 * Calculate and display twice the input.
 *
 */

#include <stdio.h>

int main (void) {

  int x=0, y=0;
  
  printf("Enter a number: ");
  scanf("%d", &x);
  y = x * 2;

  printf("Twice: %d\n", y);


  return 0;
}
