/*
 * Chapter 3: Exercise 6:
 * Break
 *
 */

#include <stdio.h>

#define   END  10
#define START   1
#define STOP   30

int main (void) {
  
  int i=0, x=0;
  i = START;

  for (i=START; i<=END; i++) {
    x+=i;
    if (x>=STOP) {
      break;
    }
  }

  printf("For - Loop with Break | Output: %d\n", x);
  return 0;
}
