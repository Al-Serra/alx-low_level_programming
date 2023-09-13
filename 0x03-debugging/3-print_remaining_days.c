#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
{
if (month > 2 && day >= 60)
{
day++;
}
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
else
{
if (month == 2 && day == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
}
}


positive_or_negative.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - determine if a number is positive, negative or zero.
 *
 * Description: Check if positive or negative
 *
 * @i: describe input
 *
 */

void positive_or_negative(int i)
{
/* i is the received number to check*/
Int n = i;

	if (n > 0)
{
	printf(“ % d is positive\n”, n);
}
else if (i == 0)
{
	printf(“ % d is zero\n”, n);
}
else
{
	printf(“ % d is negative\n”, n);
}

}
