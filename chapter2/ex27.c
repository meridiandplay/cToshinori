/*
 * Chapter 2: Exercise 7:
 * Octal and hexadecimal numbers.
 *
 */

#include <stdio.h>

int main (void) {

  int x=0;
  printf("Enter decimal number: ");
  scanf("%d", &x);

  printf("Octal display:\t\t0%o\n", x);
  printf("Hexadecimal display:\t0x%x\n", x);

  return 0;
}
