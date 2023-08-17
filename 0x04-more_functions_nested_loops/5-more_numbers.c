#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 * Return: void
 */
void more_numbers(void)
{
	int s, k;

	for (s = 0; s < 10; s++)
	{
		for (k = 0; k < 15; k++)
		{
			if (k > 9)
				_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
		}
		_putchar('\n');
	}

}
