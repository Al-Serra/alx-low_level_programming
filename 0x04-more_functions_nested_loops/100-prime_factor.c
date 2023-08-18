#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number
 * 612852475143, followed by a new line
 * Return: ZERO
 */
int main(void)
{
	unsigned long int s, k = 612852475143;

	for (s = 3; s < 782849; s = s + 2)
	{
		while ((k % s == 0) && (k != s))
			k = k / s;
	}
	printf("%lu\n", k);
	return (0);
}
