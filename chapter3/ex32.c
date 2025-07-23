/*
 * Chapter 3: Exercise 2:
 * Conditional branch 2
 *
 */

#include <stdio.h>


int main (void) {

  int score=0;

  printf("Score: ");
  scanf("%d", &score);

  if (score>=80) {
    printf("A\n");
  } else if (score>=65) {
    printf("B\n");
  } else if (score>=60) {
    printf("C\n");
  } else {
    printf("D\n");
  }
  return 0;
}
