#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: to start printing from n
 * Return: Zero
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
				_putchar('\n');
				break;
			}
			else if (n < 10)
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
