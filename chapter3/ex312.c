/*
 * Chapter 3: Exercise 10-2
 * Score branch program
 *
 */

#include <stdio.h>

int main (void) {
  
  int score=0;
  printf("Enter score: ");
  scanf("%d", &score);
  
  if (score<0 || score>100) {
    printf("Score input error\n");
  } else if (score>=80) {
    printf("A\n");
  } else if (score>=70) {
    printf("B\n");
  } else {
    printf("C\n");
  }
  
  return 0;
}
