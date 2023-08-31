#include "main.h"
/**
 * is_prime_number - returns 1
 * if the input integer is a prime number,
 * otherwise return 0
 * @n: the base number
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (multipliers(n, 2));
}
/**
 * multipliers - find multipliers
 * @n: the base number
 * @s: the iterator number
 * Return: 1 if n is prime, otherwise 0
 */
int multipliers(int n, int s)
{
	if (s == n)
		return (1);
	if (n % s == 0)
		return (0);
	return (multipliers(n, s + 1));
}

