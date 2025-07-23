/*
 * Chapter 3: Exercise 4:
 * Do loop
 *
 */

#include <stdio.h>

#define   END  10
#define START   1

int main (void) {
  
  int i=0, x=0;
  i = START;

  do {
    x+=i;
    i++;
  } while(i<=END);

  printf("Do - Loop | Sum from 1 to 10 is: %d\n", x);
  return 0;
}
