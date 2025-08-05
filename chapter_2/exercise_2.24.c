/*
C: How to Program by Paul Deitel & Harvey Deitel
Chapter 2 Exercise 2.24 Odd or even
File created: 2025-08-06
File last modified: 2025-08-06
Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Enter integer to determine if odd or even: ");
	int user_number = 0;
	scanf("%d", &user_number);

	if(user_number % 2 == 0)
	{
		printf("%s\n", "Your integer is even.");
	}
	if(user_number % 2 != 0)
	{
		printf("%s\n", "Your integer is odd.");
	}
	
	return 0;
}