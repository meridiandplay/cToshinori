/*
 * Chapter 3: Exercise 1:
 * Conditional branch-1
 *
 */

#include <stdio.h>

int main (void) {

  int score=0;
  
  printf("Score: ");
  scanf("%d", &score);

  if (score>=60) {
    printf("pass\n");
  } else {
    printf("fail\n");
  }

  return 0;
}
