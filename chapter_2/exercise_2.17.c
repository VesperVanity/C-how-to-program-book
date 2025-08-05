/*
C: How to Program by Paul Deitel & Harvey Deitel
Chapter 2 Exercise 2.17 Final Velocity
File created: 2025-08-05
File last modified: 2025-08-05
Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Enter initial velocity, then acceleration, and elapsed time: " );
	float u, a, t = 0.0f;
	scanf("%f%f%f", &u, &a, &t);
	float v, s = 0.0f;
	v = u + a * t;
	s = u * t + (1 / 2) * 2 * 2;
	printf("%s%f\n%s%f\n", "final velocity: ", v, "distance traversed: ", s);
	return 0;
}