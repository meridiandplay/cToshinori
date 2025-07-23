/*
 * Chapter 3: Exercise 15:
 * Maximum value of three different variables a, b, and c
 *
 */

#include <stdio.h>

int main (void) {

  int a=1, b=2, c=3, max=0;
  if ((a>b) && (a>c)) {
    max=a;
  } else if (b>c) {
    max=b;
  } else {
    max=c;
  }
  
  printf("max=%d a=%d b=%d c=%d \n", max, a, b, c);

  return 0;
}
