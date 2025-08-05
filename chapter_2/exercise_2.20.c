/*
C: How to Program by Paul Deitel & Harvey Deitel
Chapter 2 Exercise 2.20 Converting from seconds to hours, minutes and seconds
File created: 2025-08-05
File last modified: 2025-08-05
Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Enter total time elapsed in seconds: ");
	int user_input = 0;
	scanf("%d", &user_input);

	int hour_unit = 3600;
	int minute_unit = 60;
	int hour_amount, minute_amount = 0;

	hour_amount = user_input / hour_unit;
	user_input -= hour_amount * hour_unit;
	
	minute_amount = user_input / minute_unit;
	user_input -= minute_amount * minute_unit;

	int final_seconds_amount = user_input;
	
	printf("%s%d%s%d%s%d\n", "hours:", hour_amount, " minutes:", minute_amount, 
		" seconds:", final_seconds_amount);

	return 0;
}