/*
 * Chapter 3: Exercise 10-3:
 * Numbers in a piramid
 *
 */

#include <stdio.h>

#define START 1
#define   END 5

int main (void) {

  int i=0, n=0;
  for (n=START; n<=END; n++) {
    
    for (i=START; i<=END-n; i++) {
      // Print leading spaces
      printf(" ");
    }

    for (i=START; i<=n; i++) {
      printf("%d ", n);
    }
    printf("\n");
  }


  return 0;
}
