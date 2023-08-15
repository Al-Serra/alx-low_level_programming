#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @s: The computed number
 * Return: Absolute value of Entger, or ZERO
 */
int _abs(int s)
{
	if (s < 0)
		return (-s);
	else if (s >= 0)
		return (s);
	return (0);
}
