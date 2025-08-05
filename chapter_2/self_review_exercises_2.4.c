/*
C: How to Program by Paul Deitel & Harvey Deitel
Chapter 2 Exercise 2.4 a,b,c,d,e,f
File created: 2025-08-05
File last modified: 2025-08-05
Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	//Program will calculate the product of three integers
	printf("%s\n", "Enter three integers: ");
	int x, y, z = 0;
	scanf("%d%d%d", &x, &y, &z);
	int result = x * y * z;
	printf("%s%d\n", "The product is: ", result);
	return 0;
}