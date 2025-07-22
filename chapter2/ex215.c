/*
 * Chapter 2: Exercise 15:
 * Convert 12 to binary form in an orthodox way
 * 
 */

#include <stdio.h>

int main (void) {

  int x=12; // 1100 in binary
  int y0=0, y1=0, y2=0, y3=0;
  
  y0 = x%2;
  x /= 2;
  y1 = x%2;
  x /= 2;
  y2 = x%2;
  x /= 2;
  y3 = x;
  
  printf("12 In binary: %d%d%d%d\n", y3, y2, y1, y0);
  

  return 0;
}
