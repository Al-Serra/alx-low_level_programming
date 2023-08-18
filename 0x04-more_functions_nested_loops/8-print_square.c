#include "main.h"
/**
 * print_square -  prints a square, followed by a new line
 * @size: the size of the square
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, s;

		for (i = 1; i <= size; i++)
		{
			for (s = 1; s <= size; s++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
