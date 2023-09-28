#include "main.h"
/**
 * binary_to_uint -  converts a binary number to
 * an unsigned int decimal
 * @b: a binary string
 * Return: (unsigned int) decimal(the converted num)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int s;

	if (!b)
		return (0);
	for (s = 0; b[s] ; s++)
	{
		if (b[s] < '0' || b[s] > '1')
			return (0);
		decimal = 2 * decimal + (b[s] - '0');
	}
	return (decimal);
}
