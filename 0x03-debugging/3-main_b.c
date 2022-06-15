#include <stdio.h>
#include "main.h"

/**
 * main - takes date and print how many days left in a year
 * taking ino accunt leap years
 * return: 0
 */

int main(void)
{
	int month;
	int day;
	int year;

	month = 02;
	day = 29;
	year = 200;

	printf("Date: %02d/%03d/%04d\n", month,day, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	return (0);
}
