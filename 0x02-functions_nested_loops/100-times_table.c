#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the treated number
 * Return: void(matrix)
 */
void print_times_table(int n)
{
	int s, k, p;

	if (n >= 0 && n <= 14)
	{
		for (s = 0; s <= n; s++)
		{
			for (k = 0; k <= n; k++)
			{
				p = s * k;
				if (p > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((p / 100) + '0');
					_putchar(((p / 10) % 10) + '0');
					_putchar((p % 10) + '0');
				}
				else if (p > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((p / 100) % 10) + '0');
					_putchar((p % 10) + '0');
				}
				else
				{
					if (k != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(p + '0');
				}
			}
			_putchar('\n');
		}
	}
}
