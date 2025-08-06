/*
C: How to Program by Paul Deitel & Harvey Deitel
Chapter 2 Exercise 2.31 Table of squares and cubes
File created: 2025-08-06
File last modified: 2025-08-06
Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s\t%s\t%s\t\n", "number", "square", "cube");
	int number = 0;
	int square = 0;
	int cube = 0;
	square = number * number;
	cube = number * number * number;
	printf("%d\t%d\t%d\t\n", number, square, cube);
	++number;
	
	square = number * number;
	cube = number * number * number;
	printf("%d\t%d\t%d\t\n", number, square, cube);
	++number;
	square = number * number;
	cube = number * number * number;
	printf("%d\t%d\t%d\t\n", number, square, cube);
	++number;
	square = number * number;
	cube = number * number * number;
	printf("%d\t%d\t%d\t\n", number, square, cube);
	++number;
	square = number * number;
	cube = number * number * number;
	printf("%d\t%d\t%d\t\n", number, square, cube);
	++number;
	square = number * number;
	cube = number * number * number;
	printf("%d\t%d\t%d\t\n", number, square, cube);
	++number;
	square = number * number;
	cube = number * number * number;
	printf("%d\t%d\t%d\t\n", number, square, cube);
	++number;
	square = number * number;
	cube = number * number * number;
	printf("%d\t%d\t%d\t\n", number, square, cube);
	++number;
	square = number * number;
	cube = number * number * number;
	printf("%d\t%d\t%d\t\n", number, square, cube);
	++number;
	square = number * number;
	cube = number * number * number;
	printf("%d\t%d\t%d\t\n", number, square, cube);
	++number;
	square = number * number;
	cube = number * number * number;
	printf("%d\t%d\t%d\t\n", number, square, cube);

	return 0;
}