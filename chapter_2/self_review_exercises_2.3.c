/*
C: How to Program by Paul Deitel & Harvey Deitel
Chapter 2 Exercise 2.3 a,b,c,d,e,f,g,h
File created: 2025-08-04
File last modified: 2025-08-05
Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	//a
	int c, thisVariable, q76354, number = 0;
	//b
	printf("%s", "Enter an integer: ");
	//c
	int a = 0;
	scanf("%d", &a);
	//d
	if(number != 7)
	{
		printf("%s\n", "The variable number is not equal to 7.");
	}
	//e
	printf("%s\n", "This is a C program.");
	//f
	printf("%s\n", "This is a C");
	printf("%s\n", "program.");
	//g
	printf("%s\n", "This");
	printf("%s\n", "is");
	printf("%s\n", "a");
	printf("%s\n", "C");
	printf("%s\n", "program.");
	//h
	printf("%s\t", "This");
	printf("%s\t", "is");
	printf("%s\t", "a");
	printf("%s\t", "C");
	printf("%s\t", "program.");
	return 0;
}