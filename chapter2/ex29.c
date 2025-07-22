/*
 * Chapter 2: Exercise 9:
 * Add comments.
 *
 */


/*
 * A program that calculates the area and circumference
 * of a circle
 */

#include <stdio.h>

#define PI 3.14159

int main (void) {

  double radius=0.0, circ=0.0, area=0.0;

  // Read radius
  printf("Enter radius: ");
  scanf("%lf", &radius);
  // Circumference calculation
  circ = 2 * PI * radius;
  // Area calculation
  area = PI * radius * radius;

  // Display results
  printf("Circumference:\t%lf\n", circ);
  printf("Area:\t\t%lf\n", area);

  return 0;
}
