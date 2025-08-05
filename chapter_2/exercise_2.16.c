/*
C: How to Program by Paul Deitel & Harvey Deitel
Chapter 2 Exercise 2.16 Arithmetic
File created: 2025-08-05
File last modified: 2025-08-05
Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Enter two integers: ");
	int x, y = 0;
	scanf("%d%d", &x, &y);
	printf("%s%d\n", "sum: ", x + y);
	printf("%s%d\n", "difference: ", x - y);
	printf("%s%d\n", "product: ", x * y);
	printf("%s%d\n", "quotient: ", x / y);
	printf("%s%d\n", "remainder: ", x % y);
	return 0;
}