#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer to be printed
 */
void print_number(int n)
{
	int power = 1;
	int np = 0;
	int h = n;

	if (n < 0)
	{
		_putchar('-');
		np = 1;
	}
	while (h > 9 || h < -9)
	{
		power *= 10;
		h /= 10;
	}
	while (power > 0)
	{
		if (power > 9)
		{
			if (!np)
				_putchar((n / power % 10) + '0');
			else
				_putchar((n / power % 10) * -1 + '0');
			power /= 10;
		}
		if (power == 1)
		{
			if (np)
				_putchar((n % 10) * -1 + '0');
			else
				_putchar(n % 10 + '0');
			power = 0;
		}
	}
}
