/*
 * Chapter 2: Exercise 8:
 * Real number calculation.
 *
 */

#include <stdio.h>

#define PI 3.14159

int main (void) {

  double radius=0.0, circ=0.0, area=0.0;
  printf("Enter radius: ");
  scanf("%lf", &radius);

  circ = 2 * PI * radius;
  area = PI * radius * radius;

  printf("Circumference:\t%lf\n", circ);
  printf("Area:\t\t%lf\n", area);

  return 0;
}
