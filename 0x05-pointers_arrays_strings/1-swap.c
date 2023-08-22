#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: the pointer to the 1st value
 * @b: the pointer to 2nd value
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
