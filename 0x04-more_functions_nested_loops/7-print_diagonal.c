#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: input, number of lines to be printed
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int s, k;

		for (s = 0; s < n; s++)
		{
			for (k = 0; k <= s; k++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
