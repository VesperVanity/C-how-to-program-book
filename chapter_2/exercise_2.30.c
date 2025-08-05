/*
C: How to Program by Paul Deitel & Harvey Deitel
Chapter 2 Exercise 2.30 Separating digits in an integer
File created: 2025-08-06
File last modified: 2025-08-06
Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Enter a five-digit number: ");
	int user_number = 0;
	scanf("%d", &user_number);

	int digit_1_position = 10000;
	int digit_2_position = 1000;
	int digit_3_position = 100;
	int digit_4_position = 10;
	int digit_5_position = 1;

	int first_digit = user_number / digit_1_position;
	user_number -= digit_1_position * first_digit;

	int second_digit = user_number / digit_2_position;
	user_number -= digit_2_position * second_digit;

	int third_digit = user_number / digit_3_position;
	user_number -= digit_3_position * third_digit;
	
	int fourth_digit = user_number / digit_4_position;
	user_number -= digit_4_position * fourth_digit;

	int fifth_digit = user_number / digit_5_position;
	user_number -= digit_5_position * fifth_digit;
	printf("%d\t%d\t%d\t%d\t%d\t\n", first_digit, second_digit, third_digit, 
		fourth_digit, fifth_digit);

	return 0;
}