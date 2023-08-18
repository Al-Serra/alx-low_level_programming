#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times
 * Return: void
 */
void print_line(int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
