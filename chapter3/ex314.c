/*
 * Chapter 3: Exercise 14:
 * Program for finding prime numbers
 *
 */

#include <stdio.h>

#define START   2
#define END   100

int main (void) {

  int i=0, j=0;
  for(i=START; i<=END; i++) {
    for(j=2; j<i; j++) {
      if(i%j==0) {
      goto LP_END;
      }
    }
    printf("%d ", i);
    LP_END:;
  }
  printf("\n");

  return 0;
}
