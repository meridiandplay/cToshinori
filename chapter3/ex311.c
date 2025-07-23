/*
 * Chapter 3: Exercise 10-1:
 * Determine wheter even or odd
 *
 */

#include <stdio.h>

int main (void) {

  int number=0;
  printf("Please enter an integer value: ");
  scanf("%d", &number);

  printf("%d is ", number);
  if (number == 0) {
    printf("not a number, omegalul\n");
  } else if (number % 2 == 0 ) {
    printf("even\n");
  } else {
    printf("odd\n");
  }

  return 0;
}
