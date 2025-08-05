/*
C: How to Program by Paul Deitel & Harvey Deitel
Chapter 2 Exercise 2.23 Largest and smallest integers
File created: 2025-08-06
File last modified: 2025-08-06
Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Enter three integers: ");
	int num_1, num_2, num_3;
	scanf("%d%d%d", &num_1, &num_2, &num_3);
	int smallest_number, largest_number = 0;

	if(num_1 < num_2)
	{
		if(num_1 < num_3)
		{
			smallest_number = num_1;
		}
	}

	if(num_2 < num_1)
	{
		if(num_2 < num_3)
		{
			smallest_number = num_2;
		}
	}

	if(num_3 < num_1)
	{
		if(num_3 < num_2)
		{
			smallest_number = num_3;
		}
	}
	printf("%s%d\n", "smallest number: ", smallest_number);

	if(num_1 > num_2)
	{
		if(num_1 > num_3)
		{
			largest_number = num_1;
		}
	}

	if(num_2 > num_1)
	{
		if(num_2 > num_3)
		{
			largest_number = num_2;
		}
	}

	if(num_3 > num_2)
	{
		if(num_3 > num_1)
		{
			largest_number = num_3;
		}
	}
	printf("%s%d\n", "largest number: ", largest_number);
	return 0;
}