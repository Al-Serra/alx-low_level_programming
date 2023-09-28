#include "main.h"
/**
 * flip_bits - gets the number of bits flipped form n to m
 * @n: 1st lu int
 * @m: 2nd lu int
 * Return: number of bits need to flip to get from `n to `m`
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int size;
	unsigned long int flipped;
	unsigned long int s;

	size = sizeof(n) * 8 - 1;

	flipped = 0;
	s = 0;

	while (s <= size)
	{
		if ((n & 1) != (m & 1))
			flipped++;

		n = n >> 1;
		m = m >> 1;

		s++;
	}

	return (flipped);

}
