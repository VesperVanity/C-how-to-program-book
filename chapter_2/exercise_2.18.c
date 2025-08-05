/*
C: How to Program by Paul Deitel & Harvey Deitel
Chapter 2 Exercise 2.18 Comparing Values
File created: 2025-08-05
File last modified: 2025-08-05
Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Of your country, enter the highest rainfall ever recorded: ");
	int highest_rainfall = 0;
	scanf("%d", &highest_rainfall);
	printf("%s", "Now enter the current year rainfall: ");
	int current_rainfall = 0;
	scanf("%d", &current_rainfall);
	if(current_rainfall > highest_rainfall)
	{
		highest_rainfall = current_rainfall;
		printf("%s\n", "The current year rainfall is the highest in history in your country!");
	}

	return 0;
}