/*
 * Chapter 2: Exercise 14:
 * Calculate the volume of a sphere and the surface area
 *
 */

#include <stdio.h>

#define PI 3.14159

int main (void) {

  double radius=0.0, volume=0.0, surface=0.0;

  // Get radius
  printf("Enter radius: ");
  scanf("%lf", &radius);

  // Calculate surface
  surface = 4.0 * PI * radius * radius;

  // Calculate Volume
  volume = 4.0 * PI * radius * radius * radius / 3.0;
  
  // Display results
  printf("Sphere surface:\t%lf\n", surface);
  printf("Sphere volume:\t%lf\n", volume);

  return 0;
}

