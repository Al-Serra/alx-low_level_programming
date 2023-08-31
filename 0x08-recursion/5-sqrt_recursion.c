#include "main.h"
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: the Base number
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursion(n, 0));
}
/**
 * sqrt_recursion - to find the natural square root of a number
 * @n: the saure root to be calculated
 * @i: estimate of the square root of n, checks
 * iteratively within the recursion
 * Return: the square root i
 */
int sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_recursion(n, i + 1));
}
