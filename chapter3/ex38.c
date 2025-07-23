/*
 * Chapter 3: Exercise 8:
 * Switch case
 *
 */

#include <stdio.h>

#define A  4
#define B  3
#define C  2
#define D  1

int main (void) {

  int score=0, i=0;
  printf("Enter score: ");
  scanf("%d", &score);

  if (score>=80) {
    i=A;
  } else if (score>=65) {
    i=B;
  } else if (score>=60) {
    i=C;
  } else {
    i=D;
  }

  switch(i) {
    case A: printf("A\n"); break;
    case B: printf("B\n"); break;
    case C: printf("C\n"); break;
    case D: printf("D\n"); break;
    default: break;

  }
  return 0;
}
