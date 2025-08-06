/*
C: How to Program by Paul Deitel & Harvey Deitel
Chapter 2 Exercise 2.32 Body Mass Index Calculator
File created: 2025-08-06
File last modified: 2025-08-06
Author: VesperVanity (VV) https://github.com/VesperVanity
*/
#include <stdio.h>

int main(void)
{
	printf("%s", "Enter your weight in kilos, after enter your height in meters: ");
	float user_kilos, user_height_meters = 0.0f;
	scanf("%f%f", &user_kilos, &user_height_meters);

	float BMI = user_kilos / (user_height_meters * user_height_meters);
	printf("%s%f\n", "Your BMI is: ", BMI);
	printf("%s\n", "Underweight: less than 18");
	printf("%s\n", "Normal: between 18 and 24");
	printf("%s\n", "Overweight: between 25 and 30");
	printf("%s\n", "Obese: 30 or greater");

	return 0;
}