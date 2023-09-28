#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to an integer
 * @index: the bit index set to 1
 * Return: 1 if succeeded, -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1uL << index) | *n);
	return (1);
}
