/*
 * Chapter 3: Exercise 3:
 * While loop
 *
 */

#include <stdio.h>

#define   END  10
#define START   1

int main (void) {
  
  int i=0, x=0;
  i = START;

  while (i<=END) {
    x+=i;
    i++;
  }

  printf("While - Loop | Sum from 1 to 10 is: %d\n", x);
  return 0;
}
