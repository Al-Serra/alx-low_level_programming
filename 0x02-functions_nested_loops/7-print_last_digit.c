#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @s: the treated number
 * Return: value of the last digit of a number
 */
int print_last_digit(int s)
{
	int last_num;

	last_num = s % 10;
	if (s < 0)
		last_num = -last_num;
	_putchar(last_num + '0');
	return (last_num);
}
