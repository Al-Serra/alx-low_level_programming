#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: to start printing from n
 * Return: Zero
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		if (n < 10)
		{
			_putchar(n + '0');
		}
		else if (n < 100)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else
		{
			_putchar('-');
			_putchar('1');
			_putchar(n % 10 + '0');
		}

		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}

		for (; n >= 98; n--)
		{
			if (n < 10)
			{
				_putchar(n + '0');
			}
			else if (n < 100)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else
			{
				_putchar(',');
				_putchar('1');
				_putchar(n % 10 + '0');
			}

			if (n != 98 )
			{
				_putchar('.');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
