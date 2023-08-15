#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int s, k;

	for (s = 0; s <= 9; s++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (k != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar('0' + (s * k) / 10);
			_putchar('0' + (s * k) % 10);
		}
		_putchar('\n');
	}
}
