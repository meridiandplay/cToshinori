/*
 * Chapter 3: Exercise 5:
 * For loop
 *
 */

#include <stdio.h>

#define   END  10
#define START   1

int main (void) {
  
  int i=0, x=0;
  i = START;

  for (i=START; i<=END; i++) {
    x+=i;
  }

  printf("For - Loop | Sum from 1 to 10 is: %d\n", x);
  return 0;
}
