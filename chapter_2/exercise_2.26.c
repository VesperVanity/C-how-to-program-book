/*
C: How to Program by Paul Deitel & Harvey Deitel
Chapter 2 Exercise 2.26 Multiples
File created: 2025-08-06
File last modified: 2025-08-06
Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s\n", "Enter two integers: ");
	int num_1, num_2 = 0;
	scanf("%d%d", &num_1, &num_2);
	if(num_1 % num_2 == 0)
	{
		printf("%s\n", "First integer is a multiple of the second integer.");
	}
	if(num_1 % num_2 != 0)
	{
		printf("%s\n", "First integer is NOT a multiple of the second integer.");
	}

	return 0;
}