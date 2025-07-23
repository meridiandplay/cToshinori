/*
 * Chapter 3: Exercise 7:
 * Double for loop
 *
 */

#include <stdio.h>

#define END   12
#define START  1

int main (void) {
  
  int i=0, j=0;

  printf("\n\t\t\t\tTimes Table\n");
  for (i=START; i<=END; i++) {
    for(j=START; j<END; j++) {
      printf("%5d ", j*i);
    }
    printf("\n");
  }

  return 0;
}
