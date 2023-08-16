#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int s, k, p, i, m;

	for (s = 0; s <= 9; s++)
	{
		for (k = 0; k <= 9; k++)
		{
			p = s * k;
			if (p > 9)
			{
				i = p % 10;
				m = (p - i) / 10;

				_putchar(',');
				_putchar(' ');
				_putchar(m + '0');
				_putchar(i + '0');
			}
			else
			{
				if (k != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}

				_putchar(p + '0');
			}
		}
		_putchar('\n');
	}
}
