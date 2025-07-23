/*
 * Chapter 3: Exercise 10:
 * Goto Statement
 *
 */

#include <stdio.h>

#define START  1
#define END   10

int main (void) {

  int x=0, i=0;
  printf("Sum from 1 to 10 is: ");

  i=START;
  loop:
  x+=i;
  i++;
  if (i<=END) {
    goto loop;
  }
  
  printf("%d\n", x);
  return 0;
}
