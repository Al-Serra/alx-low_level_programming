#include "main.h"
/**
 * binary_to_uint -  converts a binary number to
 * an unsigned int decimal
 * @b: a binary string
 * Return: (unsigned int) decimal(the converted num)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;
	unsigned int s;

	for (decimal = 0, s = 0; b[s] != '\0'; s++)
	{
		if (b[s] == '1')
			decimal = (decimal << 1) | 1;
		else if (b[s] == '0')
			decimal <<= 1;
		else if (b[s] != '0' && b[s] != '1')
			return (0);
	}

	return (decimal);
}
